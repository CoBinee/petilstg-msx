; Player.inc : �v���C���[
;


; �}�N���̒�`
;

; �|���ꂽ���R
PLAYER_OVER_NULL    =   0x00
PLAYER_OVER_KILLED  =   0x01
PLAYER_OVER_EMPTY   =   0x02

; �O���֐��錾
;

    .globl  _PlayerInitialize
    .globl  _PlayerReset
    .globl  _PlayerUpdate
    .globl  _PlayerRender

; �O���ϐ��錾
;

    .globl  _playerOver
    .globl  _playerEnergy
    .globl  _playerShield
    .globl  _playerDamage
    .globl  _playerHitCount