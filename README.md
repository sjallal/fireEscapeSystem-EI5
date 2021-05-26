# fireEscapeSystem-EI5
A smart fire detection and escaping system that guides people and show them a path to get out of the building caught on fire safely.


Link for Circuit Diagram on EasyEda: https://easyeda.com/sjallal/fire-escape-system

@startuml
"Cloud Job Schedular" -> "PubSub Topic": Invokes the pubsub topic
note left
Will be invoked on:
FRI: 9:00am
SAT: 5:00pm
SUN: 5:00pm
MON: 5:00pm
end note

"Cloud Function" <- "PubSub Topic": Triggers the function

group BOT [Get the spaces]
  "Cloud Function" -> "BOT": Requests for the spaces of people being added to the bot
  "BOT" -> "Cloud Function": Responses for the request raised
end

group Okta [Generate tokens]
  "Cloud Function" -> "Okta": Requests for the access token of Jigsaw & TimeCard
  "Okta" -> "Cloud Function": Jigsaw & TimeCard access token
end

group Jigsaw [Generate list of people for a perticular office]
  "Cloud Function" -> "Jigsaw": Requests for the list of people assigned in a perticular office location
  "Jigsaw" -> "Cloud Function": List of people assigned in a perticular office
end

group TimeCard [Generate list of timecard for a person]
"Cloud Function" -> "TimeCard": Requests for the time card details of a perticular person
"TimeCard" -> "Cloud Function": Time Card of a perticular person
end

group BOT [Send the message]
"Cloud Function" -> "BOT": Checks if the timecard is filled? If not requests the bot to send a message
end
@enduml
