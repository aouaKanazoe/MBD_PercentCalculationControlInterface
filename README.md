# PercentCalculationControlInterface (PCCI)

Ce projet implémente un composant logiciel nommé **PCCI** (*Percent Calculation Control Interface*) dans le cadre d’un workflow **Model-Based Design (MBD)**.  
Il est destiné à une cible Arduino et permet de contrôler une LED en fonction d’un pourcentage calculé depuis une entrée analogique.

---

## 🧰 Technologies utilisées

- **Simulink (MATLAB)** – Modélisation comportementale
- **Embedded Coder** – Génération automatique du code C depuis Simulink
- **PlatformIO + VS Code** – Intégration et compilation du firmware Arduino
- **Arduino Uno** – Plateforme cible pour test en boucle fermée

---

## 📦 Fonctionnalités

- Lecture d’un signal brut (`SRS_001`) via ADC
- Calcul dynamique d’un pourcentage (`SRS_003`)
- Activation d’un indicateur LED (`SRS_002`) selon seuil > 50% (`SRS_004`)
