MinimapData equ 02034000h

TanksCollected equ 02037200h

Language equ 03000011h

LastAbility equ 0300001Bh
SecurityLevelFlash equ 0300001Ch
PowerOutageSecurityBackup equ 0300001Dh

CurrArea equ 0300002Ch
CurrRoom equ 0300002Dh
CurrSubEvent equ 03000060h
PrevSubEvent equ 03000062h
NonGameplayFlag equ 03000B84h
CurrEvent equ 03000B87h
SaveSlot equ 03000B8Dh
GameMode equ 03000BDEh

CurrentClipdataAction equ 03000053h

ToggleInput equ 030011ECh

LevelData equ 03000084h
.sym off
LevelData_Bg0 equ 00h
LevelData_Bg1 equ 08h
LevelData_Bg2 equ 10h
LevelData_Clipdata equ 18h
; LevelLayer struct
LevelLayer_Data equ 00h
LevelLayer_Stride equ 04h
LevelLayer_Rows equ 06h
.sym on

ArmCannonPos equ 03000B80h
.sym off
ArmCannonPos_X equ 00h
ArmCannonPos_Y equ 02h
.sym on

GameTimer equ 03000138h
.sym off
GameTimer_Hours equ 00h
GameTimer_Minutes equ 01h
GameTimer_Seconds equ 02h
GameTimer_Frames equ 03h
GameTimer_Maxed equ 04h
.sym on

MiscProgress equ 030006ACh
.sym off
; technically not a struct; shifted by two to make ldr work properly
; heavily modified from vanilla to make room for more flags
MiscProgress_AtmoStabilizers equ 02h
MiscProgress_NormalXBarriers equ 03h
MiscProgress_SuperXBarriers equ 04h
MiscProgress_PowerXBarriers equ 05h
MiscProgress_Eyedoors equ 06h
MiscProgress_MajorLocations equ 08h
MiscProgress_StoryFlags equ 0Ch
.sym on

CurrentEnemy equ 030006BCh
EnemyList equ 03000140h
.sym off
Enemy_Status equ 00h
Enemy_Health equ 14h
Enemy_Animation equ 16h
Enemy_Id equ 1Dh
Enemy_RoomSlot equ 1Eh
Enemy_SpritesetGfxSlot equ 1Fh
Enemy_Palette equ 20h
Enemy_Pose equ 24h
Enemy_IgnoreSamusCollisionTimer equ 26h
Enemy_Timer0 equ 2Eh
Enemy_Timer1 equ 2Fh
Enemy_FreezeTimer equ 32h
Enemy_StandingOnFlag equ 33h
Enemy_Properties equ 34h
Enemy_FreezePaletteOffset equ 35h
.sym on

CurrentProjectile equ 03000B60h
ProjectileList equ 03000960h
.sym off
ProjectileList_Len equ 16
Projectile_Status equ 00h
Projectile_OamPointer equ 04h
Projectile_PosY equ 08h
Projectile_PosX equ 0Ah
Projectile_AnimFrame equ 0Ch
Projectile_AnimCounter equ 0Eh
Projectile_Type equ 0Fh
Projectile_Direction equ 10h
Projectile_Stage equ 12h
Projectile_Part equ 13h
Projectile_VertOffscreenRange equ 14h
Projectile_HorizOffscreenRange equ 15h
Projectile_BboxTop equ 16h
Projectile_BboxBottom equ 18h
Projectile_BboxLeft equ 1Ah
Projectile_BboxRight equ 1Ch
Projectile_Timer equ 1Eh
Projectile_ParentSlot equ 1Fh
Projectile_Size equ 20h
.sym on

SamusState equ 03001244h
SamusStateBackup equ 03001270h
.sym off
SamusState_Pose equ 01h
SamusState_ForcedMovement equ 03h
SamusState_ArmCannonDirection equ 07h
SamusState_ProjectileCooldown equ 0Ah
SamusState_SoloWaveDirection equ 0Bh	; non-vanilla
SamusState_ChargeCounter equ 0Ch
SamusState_DiagonalAim equ 0Dh
SamusState_Direction equ 12h
SamusState_PositionX equ 16h
SamusState_PositionY equ 18h
SamusState_VelocityX equ 1Ah
SamusState_VelocityY equ 1Ch
SamusState_Animation equ 22h
.sym on

SamusUpgrades equ 03001310h
.sym off
SamusUpgrades_CurrEnergy equ 00h
SamusUpgrades_MaxEnergy equ 02h
SamusUpgrades_CurrMissiles equ 04h
SamusUpgrades_MaxMissiles equ 06h
SamusUpgrades_CurrPowerBombs equ 08h
SamusUpgrades_MaxPowerBombs equ 09h
SamusUpgrades_BeamUpgrades equ 0Ah
SamusUpgrades_ExplosiveUpgrades equ 0Bh
SamusUpgrades_SuitUpgrades equ 0Ch
SamusUpgrades_SecurityLevel equ 0Dh
SamusUpgrades_MapDownloads equ 0Eh
SamusUpgrades_LowHealthFlag equ 0Fh
.sym on

TankCounter equ 030016F9h
.sym off
TankCounter_MaxAreaEnergyTanks equ 00h
TankCounter_CurrAreaEnergyTanks equ 01h
TankCounter_MaxAreaMissileTanks equ 02h
TankCounter_CurrAreaMissileTanks equ 03h
TankCounter_MaxAreaPowerBombTanks equ 04h
TankCounter_CurrAreaPowerBombTanks equ 05h
TankCounter_MaxTotalEnergyTanks equ 06h
TankCounter_CurrTotalEnergyTanks equ 07h
TankCounter_MaxTotalMissileTanks equ 08h
TankCounter_CurrTotalMissileTanks equ 09h
TankCounter_MaxTotalPowerBombTanks equ 0Ah
TankCounter_CurrTotalPowerBombTanks equ 0Bh
.sym on

SpecialTileset equ 03004DE4h
DestinationRoom equ 03004E3Ch

EventUpgradeInfo equ 08575FB4h
.sym off
EventUpgradeInfo_Len equ 19
EventUpgradeInfo_BeamUpgrades equ 00h
EventUpgradeInfo_ExplosiveUpgrades equ 01h
EventUpgradeInfo_SuitUpgrades equ 02h
EventUpgradeInfo_ChangesSuit equ 03h
EventUpgradeInfo_Message equ 04h
EventUpgradeInfo_SubEvent equ 06h
EventUpgradeInfo_Size equ 08h
.sym on

SecurityUnlockEvents equ 085760C8h
.sym off
SecurityUnlockEvents_Len equ 4
SecurityUnlockEvent_SecurityLevel equ 00h
SecurityUnlockEvent_Area equ 01h
SecurityUnlockEvent_PrevEvent equ 02h
SecurityUnlockEvent_NewEvent equ 03h
SecurityUnlockEvent_SubEvent equ 04h
SecurityUnlockEvent_Message equ 05h	; non-vanilla
SecurityUnlockEvent_Size equ 8
.sym on

SaveData equ 0858225Ch
.sym off
SaveData_Area equ 1Dh
SaveData_Room equ 1Eh
SaveData_PreviousDoor equ 1Fh
SaveData_BG0XPosition equ 40h
SaveData_BG0YPosition equ 42h
SaveData_BG1XPosition equ 44h
SaveData_BG1YPosition equ 46h
SaveData_BG2XPosition equ 48h
SaveData_BG2YPosition equ 4Ah
SaveData_BG3XPosition equ 4Ch
SaveData_BG3YPosition equ 4Eh
SaveData_SamusState equ 60h
SaveData_TanksCollected equ 0F80h
SaveData_Size equ 1200h
.sym on

AreaLevels equ 0879B8BCh
.sym on
LevelMeta_MapX equ 35h
LevelMeta_MapY equ 36h
.sym off

MessagesByLanguage equ 0879CDF4h

DMA0 equ 040000B0h
DMA1 equ 040000BCh
DMA2 equ 040000C8h
DMA3 equ 040000D4h
.sym off
DMA_SAD equ 00h
DMA_DAD equ 04h
DMA_CNT equ 08h
.sym on

; non-vanilla structs:

.sym off
MajorUpgradeInfo_Offset equ 00h
MajorUpgradeInfo_Bitmask equ 01h
MajorUpgradeInfo_Message equ 02h
.sym on

.sym off
MinorLocation_XPos equ 00h
MinorLocation_YPos equ 01h
MinorLocation_Upgrade equ 02h
.sym on