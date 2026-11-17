/* FUN_006d4ed2 - 0x006d4ed2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006d4ed2(void)

{
  int *piVar1;
  int iVar2;
  short *psVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_4c;
  int iStack_48;
  undefined *puStack_44;
  int *piStack_40;
  
  FUN_00879bb8();
  psVar3 = (short *)0x0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piVar4 = (int *)(extraout_ECX + 0xd4);
  *(undefined4 *)(unaff_EBP + -0x18) = 3;
  do {
    uVar5 = 0;
    if ((piVar4[-3] != 0) && (piVar4[-2] != 0)) {
      if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
        piStack_40 = (int *)0xffffffff;
        puStack_44 = &DAT_0096ae48;
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        iStack_48 = 0x6d4f28;
        FUN_00470891();
        puStack_44 = *(undefined **)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (puStack_44 == (undefined *)0x0) {
          piStack_40 = (int *)0x0;
        }
        else {
          piStack_40 = (int *)(*(uint *)((int)puStack_44 + -4) >> 1);
        }
        iStack_48 = 0x6d4f46;
        FUN_0046febf();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (*(int *)(unaff_EBP + -0x14) != 0) {
          piStack_40 = (int *)(*(int *)(unaff_EBP + -0x14) + -0xc);
          puStack_44 = (undefined *)0x6d4f5a;
          FUN_00403384();
        }
      }
      if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
        uVar5 = *(undefined4 *)*piVar4;
      }
      puStack_44 = (undefined *)0x6d4f69;
      piStack_40 = (int *)uVar5;
      piStack_40 = (int *)FUN_0087a007();
      iStack_48 = 0x6d4f74;
      puStack_44 = (undefined *)uVar5;
      FUN_0046febf();
      psVar3 = *(short **)(unaff_EBP + -0x10);
    }
    piVar4 = piVar4 + 8;
    piVar1 = (int *)(unaff_EBP + -0x18);
    *piVar1 = *piVar1 + -1;
  } while (*piVar1 != 0);
  if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
    piStack_40 = (int *)0x315;
    puStack_44 = (undefined *)(unaff_EBP + -0x18);
    iStack_48 = 0x6d4fa4;
    piVar4 = (int *)FUN_00679d86();
    puStack_44 = (undefined *)*piVar4;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (puStack_44 == (undefined *)0x0) {
      piStack_40 = (int *)0x0;
    }
    else {
      piStack_40 = (int *)(*(uint *)((int)puStack_44 + -4) >> 1);
    }
    iStack_48 = 0x6d4fc1;
    FUN_0046febf();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      piStack_40 = (int *)(*(int *)(unaff_EBP + -0x18) + -0xc);
      puStack_44 = (undefined *)0x6d4fd5;
      FUN_00403384();
    }
    puStack_44 = (undefined *)(unaff_EBP + -0x14);
    piStack_40 = (int *)0x0;
    iStack_48 = 0x6d4fe1;
    FUN_007d4a9a();
    piStack_40 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    puStack_44 = (undefined *)0x6d4ff5;
    FUN_00403191();
    piStack_40 = (int *)(unaff_EBP + -0x2c);
    puStack_44 = (undefined *)0x106;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_48 = 0x6d500a;
    uStack_4c = FUN_00411641();
    *(int **)(unaff_EBP + -0x1c) = &iStack_48;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    uStack_4c = 0x6d5022;
    FUN_0044974c();
    uStack_4c = 0x6d5029;
    uVar5 = FUN_0047077a();
    piStack_40 = (int *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    puStack_44 = (undefined *)0x6d5038;
    piStack_40 = (int *)FUN_00402bc3();
    if ((int)piStack_40 < 0) {
      puStack_44 = (undefined *)0x6d5043;
      FUN_00878dfb();
    }
    piStack_40 = &DAT_00980690;
    puStack_44 = (undefined *)0x6d504c;
    FUN_00403191();
    piStack_40 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    puStack_44 = (undefined *)0x6d5059;
    FUN_00403191();
    piStack_40 = (int *)(unaff_EBP + -0x3c);
    puStack_44 = (undefined *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_48 = 0x6d506d;
    iStack_48 = FUN_00449749();
    uStack_4c = uVar5;
    FUN_0046fcad(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    uStack_4c = 0x6d5086;
    uVar5 = FUN_00411641();
    *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_4c;
    FUN_004033a1(uVar5);
    iVar6 = *(int *)(extraout_ECX + 0x20) + -0x14;
    uVar5 = 0x1a;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_004115d9(0x1a,iVar6);
    FUN_00448e3a(uVar5,iVar6);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    piStack_40 = (int *)0x6d50ba;
    FUN_00402676();
    piStack_40 = (int *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    puStack_44 = (undefined *)0x6d50c7;
    piStack_40 = (int *)FUN_00402bc3();
    if ((int)piStack_40 < 0) {
      puStack_44 = (undefined *)0x6d50d2;
      FUN_00878dfb();
    }
    piStack_40 = (int *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    puStack_44 = (undefined *)0x6d50df;
    piStack_40 = (int *)FUN_00402bc3();
    if ((int)piStack_40 < 0) {
      puStack_44 = (undefined *)0x6d50ea;
      FUN_00878dfb();
    }
    piStack_40 = (int *)0x3;
    puStack_44 = (undefined *)0xff;
    iStack_48 = 0x6d50f9;
    FUN_004031b7();
    piStack_40 = (int *)0x3;
    puStack_44 = (undefined *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_48 = 0x6d5109;
    FUN_004031b7();
    iVar6 = *(int *)(extraout_ECX + 0x84);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (iVar6 == 0) {
      piStack_40 = (int *)0x80004003;
      puStack_44 = (undefined *)0x6d5126;
      FUN_00878dfb();
    }
    piStack_40 = (int *)(unaff_EBP + -0x3c);
    puStack_44 = (undefined *)(unaff_EBP + -0x1c);
    iStack_48 = 0x6d5135;
    puVar7 = (undefined4 *)FUN_00425067();
    piVar4 = *(int **)(unaff_EBP + 8);
    uVar5 = *puVar7;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (piVar4 == (int *)0x0) {
      piStack_40 = (int *)0x80004003;
      puStack_44 = (undefined *)0x6d514c;
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + 8);
    }
    iVar6 = *(int *)(extraout_ECX + 0x20);
    iVar2 = *piVar4;
    uStack_4c = *(undefined4 *)(unaff_EBP + -0x2c);
    iStack_48 = *(int *)(unaff_EBP + -0x28);
    puStack_44 = *(undefined **)(unaff_EBP + -0x24);
    *(int **)(unaff_EBP + -0x18) = piVar4;
    piStack_40 = *(int **)(unaff_EBP + -0x20);
    iVar6 = (**(code **)(iVar2 + 0x80))(piVar4,10,iVar6 + -0x14,uVar5);
    if (iVar6 < 0) {
      piStack_40 = (int *)&DAT_00963cc8;
      puStack_44 = *(undefined **)(unaff_EBP + -0x18);
      uStack_4c = 0x6d5183;
      iStack_48 = iVar6;
      FUN_00878e09();
    }
    piStack_40 = *(int **)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (piStack_40 != (int *)0x0) {
      puStack_44 = (undefined *)0x6d5194;
      (**(code **)(*piStack_40 + 8))();
    }
    piStack_40 = (int *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_44 = (undefined *)0x6d51a1;
    piStack_40 = (int *)FUN_00402bc3();
    if ((int)piStack_40 < 0) {
      puStack_44 = (undefined *)0x6d51ac;
      FUN_00878dfb();
    }
    piStack_40 = (int *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    puStack_44 = (undefined *)0x6d51b9;
    piStack_40 = (int *)FUN_00402bc3();
    if ((int)piStack_40 < 0) {
      puStack_44 = (undefined *)0x6d51c4;
      FUN_00878dfb();
    }
    piStack_40 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (piStack_40 != (int *)0x0) {
      puStack_44 = (undefined *)0x6d51d5;
      (**(code **)(*piStack_40 + 8))();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  piStack_40 = (int *)0x6d51e1;
  FUN_00402676();
  piStack_40 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_40 != (int *)0x0) {
    puStack_44 = (undefined *)0x6d51f2;
    (**(code **)(*piStack_40 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


