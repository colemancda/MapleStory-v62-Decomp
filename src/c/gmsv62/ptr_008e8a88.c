/* ptr_008e8a88 - 0x008e8a88 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall
ptr_008e8a88(int param_1,char *param_2,undefined4 param_3,uint *param_4,char *param_5,int param_6,
            char *param_7)

{
  byte *pbVar1;
  undefined4 uVar2;
  char cVar3;
  char cVar4;
  undefined4 *in_EAX;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined3 uVar9;
  int iVar8;
  uint *unaff_EBX;
  uint *puVar10;
  int unaff_EBP;
  uint unaff_ESI;
  undefined4 *unaff_EDI;
  byte in_AF;
  byte bVar11;
  float10 in_ST0;
  undefined4 *puStack_8;
  uint uStack_4;
  
  uStack_4 = 0x4663f111;
  *(short *)(param_1 + -0xe5603c1) = (short)ROUND(in_ST0);
  pbVar1 = (byte *)(unaff_EBP + 0x62);
  bVar11 = (byte)param_1 & 7;
  *pbVar1 = *pbVar1 >> bVar11 | *pbVar1 << 8 - bVar11;
  bVar11 = 9 < ((byte)in_EAX & 0xf) | in_AF;
  uVar5 = CONCAT31((int3)((uint)in_EAX >> 8),(byte)in_EAX + bVar11 * -6) & 0xffffff0f;
  cVar3 = (char)uVar5;
  pcVar7 = (char *)CONCAT22((short)(uVar5 >> 0x10),
                            CONCAT11((char)((uint)in_EAX >> 8) - bVar11,cVar3));
  *pcVar7 = *pcVar7 + cVar3;
  *pcVar7 = *pcVar7 + cVar3;
  puStack_8 = in_EAX;
  do {
    pcVar7[-0x71] = pcVar7[-0x71] + (char)pcVar7;
    pcVar6 = pcVar7 + 1;
    puVar10 = unaff_EBX;
    if (SCARRY4((int)pcVar7,1)) {
      bVar11 = 9 < ((byte)pcVar6 & 0xf) | bVar11;
      uVar5 = CONCAT31((int3)((uint)pcVar6 >> 8),(byte)pcVar6 + bVar11 * -6) & 0xffffff0f;
      pcVar7 = (char *)CONCAT22((short)(uVar5 >> 0x10),
                                CONCAT11((char)((uint)pcVar6 >> 8) - bVar11,(char)uVar5));
      uVar5 = unaff_ESI ^ *unaff_EBX ^ *unaff_EBX;
      _DAT_333fed70 = pcVar6;
      do {
        cVar3 = (char)pcVar7;
        *pcVar7 = *pcVar7 + cVar3;
        *pcVar7 = *pcVar7 + cVar3;
        *pcVar7 = *pcVar7 + cVar3;
        *pcVar7 = *pcVar7 + cVar3;
        *pcVar7 = *pcVar7 + cVar3;
        *(undefined1 *)(uVar5 + 0x40) = 0;
        *pcVar7 = *pcVar7 + cVar3;
        *pcVar7 = *pcVar7 + cVar3;
        if (param_1 != 2 && *pcVar7 != '\0') {
          return in_ST0;
        }
        pcVar6 = pcVar7 + 1;
        cVar4 = (char)pcVar6;
        *pcVar6 = *pcVar6 + cVar4;
        *pcVar6 = *pcVar6 + cVar4;
        pcVar6 = pcVar7 + -0x20b9bfa9;
        cVar3 = *pcVar6;
        *pcVar6 = *pcVar6 + cVar4;
        pcVar7 = param_7;
        param_1 = param_6;
        uVar5 = uStack_4;
      } while (*pcVar6 == '\0' || SCARRY1(cVar3,cVar4) != *pcVar6 < '\0');
      unaff_EDI = puStack_8 + 1;
      unaff_ESI = 0x4663f115;
      *puStack_8 = uRam4663f111;
      pcVar7 = param_7 + 1;
      cVar3 = (char)pcVar7;
      *pcVar7 = *pcVar7 + cVar3;
      *pcVar7 = *pcVar7 + cVar3;
      *pcVar7 = *pcVar7 + cVar3;
      pcVar6 = param_7;
      param_2 = param_5;
      puVar10 = param_4;
    }
    pcVar6 = pcVar6 + 1;
    in_ST0 = (float10)*(short *)(param_1 + 0x3f);
    *pcVar6 = *pcVar6 + (char)pcVar6;
    *(byte *)(unaff_ESI + 0x40) = *(byte *)(unaff_ESI + 0x40) ^ 0x1f;
    LOCK();
    cVar3 = (char)*puVar10;
    *(char *)puVar10 = (char)pcVar6;
    uVar9 = (undefined3)((uint)pcVar6 >> 8);
    puStack_8 = (undefined4 *)CONCAT31(uVar9,cVar3);
    UNLOCK();
    *(char *)((int)puStack_8 + -0x7a) = *(char *)((int)puStack_8 + -0x7a) + cVar3;
    unaff_EBX = (uint *)((int)puVar10 + 2);
    cRam61004354 = cRam61004354 + (char)param_1;
    LOCK();
    cVar4 = *(char *)unaff_EBX;
    *(char *)unaff_EBX = cVar3;
    UNLOCK();
    iVar8 = CONCAT31(uVar9,cVar4) + 0x7dffbca8;
    LOCK();
    cRamc2004386 = *(char *)unaff_EBX;
    *(char *)unaff_EBX = (char)iVar8;
    UNLOCK();
    LOCK();
    cVar3 = *(char *)unaff_EBX;
    *(char *)unaff_EBX = cRamc2004386;
    pcVar7 = (char *)CONCAT31((int3)((uint)iVar8 >> 8),cVar3);
    UNLOCK();
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  *param_2 = *param_2 + cVar3;
  LOCK();
  uVar2 = *(undefined4 *)((int)puVar10 + 3);
  *(char **)((int)puVar10 + 3) = pcVar7;
  UNLOCK();
  bVar11 = *(byte *)((int)unaff_EDI + -0x78bdffbd);
  param_2[-0x79] = param_2[-0x79] + (char)((uint)uVar2 >> 8);
  param_2[0x4f004387] = param_2[0x4f004387] + ((byte)uVar2 & bVar11);
  return in_ST0;
}


