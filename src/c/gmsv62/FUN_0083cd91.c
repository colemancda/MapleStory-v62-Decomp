/* FUN_0083cd91 - 0x0083cd91 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0083cd91(void)

{
  int iVar1;
  uint uVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar3;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  char *pcStack_24;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x2084) == 0) {
    if (DAT_00978358 == 0) goto LAB_0083cedc;
    if (*(int *)(DAT_00978358 + 0x528) < 1) {
      if (*(int *)(extraout_ECX + 0x208c) != 0) goto LAB_0083cedc;
      pcStack_24 = (char *)0x83ce13;
      iVar1 = FUN_007d1e08();
      if (iVar1 - *(int *)(extraout_ECX + 0x2090) < 500) goto LAB_0083cedc;
      if (*(int *)(extraout_ECX + 0x3294) != 0) {
        pcStack_24 = (char *)0xc1b;
        iStack_28 = unaff_EBP + -0x14;
        uStack_2c = 0x83ce3f;
        iStack_28 = FUN_00679d22();
        pcStack_24 = (char *)0xc;
        *(undefined4 *)(unaff_EBP + -4) = 1;
        uStack_2c = 0x83ce4e;
        FUN_00471102();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        goto LAB_0083ce57;
      }
      pcStack_24 = (char *)0x83ce63;
      iVar1 = FUN_00429303();
      uVar2 = *(uint *)(iVar1 + 0x108) >> 4 & 1;
      pcStack_24 = (char *)0x0;
      *(uint *)(unaff_EBP + -0x14) = uVar2;
      iStack_28 = 0;
      if (uVar2 == 0) {
        uStack_2c = 0x87;
        iStack_30 = 0x83cea5;
        FUN_0060142b();
        pcStack_24 = (char *)(unaff_EBP + -0x24);
        *(undefined4 *)(unaff_EBP + -4) = 2;
        iStack_28 = 0x83cebb;
        FUN_004751b2();
        *(undefined4 *)(extraout_ECX + 0x208c) = 1;
        pcStack_24 = (char *)0x83ceca;
        uVar3 = FUN_007d1e08();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        *(undefined4 *)(extraout_ECX + 0x2090) = uVar3;
        pcStack_24 = (char *)0x83cedc;
        FUN_0045ebca();
        goto LAB_0083cedc;
      }
      *(undefined4 **)(unaff_EBP + -0x10) = &uStack_34;
      uVar3 = 0x122;
    }
    else {
      *(undefined4 **)(unaff_EBP + -0x10) = &uStack_34;
      uVar3 = 0x117;
    }
    pcStack_24 = (char *)0x0;
    iStack_28 = 0;
    uStack_2c = 0;
    iStack_30 = 0;
    FUN_00679d22(&uStack_34,uVar3);
    FUN_007db3ad();
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    iStack_28 = unaff_EBP + -0x10;
    pcStack_24 = s_The_MapleStory_Trading_System_is_0096c9a4;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uStack_2c = 0x83cdc2;
    FUN_00434e21();
    iStack_30 = unaff_EBP + -0x10;
    uStack_2c = 0xc;
    uStack_34 = 0x83cdcd;
    FUN_00471102();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_0083ce57:
    pcStack_24 = (char *)0x83ce5c;
    FUN_00414ebb();
  }
LAB_0083cedc:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


