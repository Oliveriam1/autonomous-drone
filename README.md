# autonomous-drone
Cílem toho repozitáře je vytvořit modulární simulační systém pro vývoj a testování bezpilotních prostředků.

Systém má umožnit simulovat letové chování dronu, jeho senzory, komunikaci, autonomní navigaci a reakce na okolní prostředky ještě před nasazením na reálný hardware.

Projekt bude postupně podporovat:
- simulaci dronu ve virtuálním prostředí
- propojení s autopilotem ArduPilot
- komunikaci pomocí MAVLink
- testování autonomních letových misí
- simulaci GPS, IMU, kamer a další senzorů
- testování detekce objektů
- řízení pomocí externích programů (Python, C++)

Dlouhodobým cílem je tedy vytvořit prostředí, ve kterém bude možné bnezpečně vyvíjet a ověřovat software pro skutečné drony bez nutnosti provádět každý test na fyzickém zařízení.
