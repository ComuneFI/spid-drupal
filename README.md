# SPID-Drupal

## Cos'è SPID
SPID, Sistema Pubblico di Identità Digitale, è il nuovo metodo di login che permette a cittadini e imprese di accedere con un’unica identità digitale a tutti i servizi online di pubbliche amministrazioni e imprese aderenti.
Grazie a SPID vengono meno le decine di password, chiavi e codici necessari oggi per utilizzare i servizi online di Pa e imprese.

Maggiori informazioni 
www.spid.gov.it
http://www.agid.gov.it/agenda-digitale/infrastrutture-architetture/spid

Il progetto SPID-Drupal ha l'obiettivo di creare un modulo per implementare in maniera agevole SPID nei portali e servizi basati su Drupal.

Nella pagina /admin/config/people/accounts/fields si possono configurare dei campi aggiungivi del profilo utente. Se il nome ad uso interno è correttametne configurato 
i campi vengono compilati leggendo da SPID le informazioni. 

i campi possibili sono

spidCode
name
familyName
placeOfBirth
countryOfBirth
dateOfBirth
gender
companyName
registeredOffice
fiscalNumber
ivaCode
idCard
mobilePhone
expirationDate
digitalAddress

nella creazione dei campi personalizzati nel profilo drupal i nomi devono essere in formato snake_case e preceduti da field (p.e. familyName diventa field_family_name) 
