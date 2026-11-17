/* FUN_0061595d - 0x0061595d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0061595d(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  short *extraout_ECX;
  short *extraout_ECX_00;
  short *extraout_ECX_01;
  int unaff_EBP;
  short *psVar4;
  undefined4 uVar5;
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  int iStack_38;
  short *psStack_34;
  undefined4 uStack_30;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  psVar4 = *(short **)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (psVar4 == (short *)0x0) {
    psVar4 = extraout_ECX + 0xd4;
  }
  iVar1 = *(int *)(unaff_EBP + 8);
  if (iVar1 == 0) {
    uStack_30 = 0x69a;
    psStack_34 = (short *)(unaff_EBP + -0x24);
    iStack_38 = 0x615ac5;
    uStack_30 = FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    psStack_34 = (short *)0x615ad2;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uStack_30 = 0x615ade;
    FUN_00402676();
    uStack_30 = 0x69e;
    psStack_34 = (short *)(unaff_EBP + -0x28);
    iStack_38 = 0x615aee;
    uStack_30 = FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    psStack_34 = (short *)0x615afb;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 1;
LAB_00615b02:
    uStack_30 = 0x615b07;
    FUN_00402676();
    psStack_34 = extraout_ECX_01;
  }
  else {
    if (iVar1 == 1) {
      uStack_30 = 0x69b;
      psStack_34 = (short *)(unaff_EBP + -0x20);
      iStack_38 = 0x615a9a;
      uStack_30 = FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      psStack_34 = (short *)0x615aa7;
      FUN_00419192();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      goto LAB_00615b02;
    }
    if (iVar1 == 2) {
      *(undefined4 *)(unaff_EBP + -0x18) = **(undefined4 **)(extraout_ECX + 0x3c);
      uStack_30 = 0x69d;
      psStack_34 = (short *)(unaff_EBP + -0x1c);
      iStack_38 = 0x615a19;
      puVar2 = (undefined4 *)FUN_00679d86();
      psStack_34 = (short *)*puVar2;
      uStack_30 = *(undefined4 *)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_38 = unaff_EBP + -0x10;
      uStack_3c = 0x615a2c;
      FUN_0041354c();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      uStack_30 = 0x615a3b;
      FUN_00402676();
      uStack_30 = 0xc00614a4;
      *(short ***)(unaff_EBP + -0x18) = &psStack_34;
      iStack_38 = 0;
      uStack_3c = 0x615a4c;
      psStack_34 = extraout_ECX_00;
      FUN_00424e0a();
      iStack_38 = *(int *)(psVar4 + 2);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      uStack_3c = *(undefined4 *)psVar4;
      *(undefined1 **)(unaff_EBP + -0x2c) = auStack_40;
      FUN_00424dd7(0);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      uVar3 = FUN_00615b84();
      uVar5 = FUN_00411641(uVar3);
      FUN_00424e82(uVar5);
      FUN_0042b613(uVar5,uVar3);
      goto LAB_00615b5c;
    }
    psStack_34 = extraout_ECX;
    if (iVar1 == 3) {
      uStack_30 = 0x69c;
      psStack_34 = (short *)(unaff_EBP + 0xc);
      iStack_38 = 0x6159bc;
      uStack_30 = FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      psStack_34 = (short *)0x6159c9;
      FUN_00419192();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      uStack_30 = 0x6159d5;
      FUN_00402676();
      uStack_30 = 0x69e;
      psStack_34 = (short *)(unaff_EBP + 8);
      iStack_38 = 0x6159e5;
      uStack_30 = FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      psStack_34 = (short *)0x6159f2;
      FUN_00419192();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      goto LAB_00615b02;
    }
  }
  uStack_30 = 0xc00614a4;
  *(short ***)(unaff_EBP + -0x2c) = &psStack_34;
  iStack_38 = 0;
  uStack_3c = 0x615b18;
  FUN_00424e0a();
  iStack_38 = 0;
  uStack_3c = 0;
  *(undefined1 **)(unaff_EBP + -0x18) = auStack_40;
  FUN_00433bdf(extraout_ECX + 0x40);
  uVar5 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uVar3 = FUN_00411641(0);
  FUN_00424e82(uVar3);
  FUN_0042b613(uVar3,uVar5);
  psVar4 = *(short **)(unaff_EBP + -0x14);
  if ((psVar4 != (short *)0x0) && (*psVar4 != 0)) {
    uStack_30 = 100;
    iStack_38 = 0x615b5a;
    psStack_34 = psVar4;
    FUN_007d4073();
  }
LAB_00615b5c:
  *(undefined1 *)(unaff_EBP + -4) = 0;
  uStack_30 = 0x615b67;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_30 = 0x615b73;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


