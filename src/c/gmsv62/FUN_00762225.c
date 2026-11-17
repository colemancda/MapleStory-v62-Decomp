/* FUN_00762225 - 0x00762225 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00762225(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  int iStack_a0;
  int *piStack_9c;
  undefined4 *puStack_98;
  int *piStack_94;
  undefined4 uStack_90;
  
  FUN_00879bb8();
  if ((*(int *)(extraout_ECX + 0x618) == 1) && (*(int *)(extraout_ECX + 0x63c) == 0)) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0xffffffff;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x18) = 0xffffff;
  }
  if (*(int *)(extraout_ECX + 0x69c) == 0) {
    uStack_90 = 0x80004003;
    piStack_94 = (int *)0x76226e;
    FUN_00878dfb();
  }
  piVar4 = *(int **)(extraout_ECX + 0x69c);
  uStack_90 = *(undefined4 *)(unaff_EBP + -0x18);
  puStack_98 = (undefined4 *)0x762280;
  piStack_94 = piVar4;
  iStack_a0 = (**(code **)(*piVar4 + 0xe0))();
  if (iStack_a0 < 0) {
    puStack_98 = (undefined4 *)&DAT_00963df8;
    piStack_9c = piVar4;
    FUN_00878e09();
  }
  puStack_98 = (undefined4 *)0x3;
  piStack_9c = (int *)0xfffffffe;
  iStack_a0 = 0x76229c;
  FUN_004031b7();
  puStack_98 = (undefined4 *)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piStack_9c = (int *)0x7622aa;
  piVar4 = (int *)FUN_004489f5();
  iVar5 = *piVar4;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar5 == 0) {
    puStack_98 = (undefined4 *)0x80004003;
    piStack_9c = (int *)0x7622be;
    FUN_00878dfb();
  }
  puStack_98 = (undefined4 *)(unaff_EBP + -0x2c);
  piStack_9c = (int *)(unaff_EBP + -0x18);
  iStack_a0 = 0x7622cf;
  FUN_0041141a();
  puStack_98 = (undefined4 *)0x7622d7;
  FUN_004125e6();
  puStack_98 = (undefined4 *)0x7622df;
  FUN_00412600();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_98 = (undefined4 *)(unaff_EBP + -0x2c);
  piStack_9c = (int *)0x7622ec;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    piStack_9c = (int *)0x7622f7;
    puStack_98 = (undefined4 *)iVar5;
    FUN_00878dfb();
    puStack_98 = (undefined4 *)extraout_ECX_00;
  }
  iVar5 = *(int *)(extraout_ECX + 0x618);
  iStack_a0 = (int)puStack_98;
  if (iVar5 == 0) {
    puStack_98 = (undefined4 *)0x0;
    piStack_9c = (int *)0x0;
    *(int **)(unaff_EBP + -0x18) = &iStack_a0;
    *(undefined4 *)(extraout_ECX + 0x1c) = 0x113;
    *(undefined4 *)(extraout_ECX + 0x20) = 199;
    FUN_00679e4e(&iStack_a0,0x7f0);
    FUN_008163ca();
    piVar4 = (int *)(extraout_ECX + 0x6a0);
    *(undefined4 *)(unaff_EBP + -0x18) = 3;
    do {
      piVar1 = (int *)*piVar4;
      if (piVar1 != (int *)0x0) {
        puStack_98 = (undefined4 *)0xffffff;
        iStack_a0 = 0x7624cb;
        piStack_9c = piVar1;
        iVar5 = (**(code **)(*piVar1 + 0xe0))();
        if (iVar5 < 0) {
          puStack_98 = (undefined4 *)&DAT_00963df8;
          iStack_a0 = iVar5;
          piStack_9c = piVar1;
          FUN_00878e09();
        }
      }
      piVar4 = piVar4 + 1;
      piVar1 = (int *)(unaff_EBP + -0x18);
      *piVar1 = *piVar1 + -1;
    } while (*piVar1 != 0);
    if (*(int *)(extraout_ECX + 0x614) != 0) {
      puStack_98 = (undefined4 *)0x0;
      piStack_9c = (int *)0x7624f4;
      FUN_0044562b();
    }
  }
  else if (iVar5 == 1) {
    puStack_98 = (undefined4 *)0x0;
    piStack_9c = (int *)0x0;
    *(int **)(unaff_EBP + -0x18) = &iStack_a0;
    *(undefined4 *)(extraout_ECX + 0x1c) = 0x113;
    *(undefined4 *)(extraout_ECX + 0x20) = 400;
    FUN_00679e4e(&iStack_a0,0x7f1);
    FUN_008163ca();
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(int *)(unaff_EBP + -0x18) = extraout_ECX + 0x6a0;
    do {
      piVar4 = (int *)**(int **)(unaff_EBP + -0x18);
      if (piVar4 != (int *)0x0) {
        if (*(int *)(unaff_EBP + -0x14) == *(int *)(extraout_ECX + 0x63c)) {
          puStack_98 = (undefined4 *)0xffffffff;
        }
        else {
          puStack_98 = (undefined4 *)0xffffff;
        }
        iStack_a0 = 0x7623ee;
        piStack_9c = piVar4;
        iVar5 = (**(code **)(*piVar4 + 0xe0))();
        if (iVar5 < 0) {
          puStack_98 = (undefined4 *)&DAT_00963df8;
          iStack_a0 = iVar5;
          piStack_9c = piVar4;
          FUN_00878e09();
        }
      }
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 4;
    } while (*(int *)(unaff_EBP + -0x14) < 3);
    if (*(int *)(extraout_ECX + 0x63c) == 0) {
      if (*(int *)(extraout_ECX + 0x69c) == 0) {
        puStack_98 = (undefined4 *)0x80004003;
        piStack_9c = (int *)0x762425;
        FUN_00878dfb();
      }
      piVar4 = *(int **)(extraout_ECX + 0x69c);
      iVar5 = *piVar4;
      puStack_98 = (undefined4 *)0xffffffff;
    }
    else {
      if (*(int *)(extraout_ECX + 0x69c) == 0) {
        puStack_98 = (undefined4 *)0x80004003;
        piStack_9c = (int *)0x762443;
        FUN_00878dfb();
      }
      piVar4 = *(int **)(extraout_ECX + 0x69c);
      iVar5 = *piVar4;
      puStack_98 = (undefined4 *)0xffffff;
    }
    iStack_a0 = 0x762457;
    piStack_9c = piVar4;
    iVar5 = (**(code **)(iVar5 + 0xe0))();
    if (iVar5 < 0) {
      puStack_98 = (undefined4 *)&DAT_00963df8;
      iStack_a0 = iVar5;
      piStack_9c = piVar4;
      FUN_00878e09();
    }
    if (*(int *)(extraout_ECX + 0x614) != 0) {
      puStack_98 = (undefined4 *)0x0;
      piStack_9c = (int *)0x76247b;
      FUN_0044562b();
    }
  }
  else if (iVar5 == 2) {
    puStack_98 = (undefined4 *)0x0;
    piStack_9c = (int *)0x0;
    *(int **)(unaff_EBP + -0x18) = &iStack_a0;
    *(undefined4 *)(extraout_ECX + 0x1c) = 0x113;
    *(undefined4 *)(extraout_ECX + 0x20) = 0x16a;
    FUN_00679e4e(&iStack_a0,0x7f4);
    FUN_008163ca();
    if (*(int *)(extraout_ECX + 0x614) != 0) {
      puStack_98 = (undefined4 *)0x1;
      piStack_9c = (int *)0x762351;
      FUN_0044562b();
    }
    piVar4 = (int *)(extraout_ECX + 0x6a0);
    *(undefined4 *)(unaff_EBP + -0x18) = 3;
    do {
      piVar1 = (int *)*piVar4;
      if (piVar1 != (int *)0x0) {
        puStack_98 = (undefined4 *)0xffffff;
        iStack_a0 = 0x762372;
        piStack_9c = piVar1;
        iStack_a0 = (**(code **)(*piVar1 + 0xe0))();
        if (iStack_a0 < 0) {
          puStack_98 = (undefined4 *)&DAT_00963df8;
          piStack_9c = piVar1;
          FUN_00878e09();
        }
      }
      piVar4 = piVar4 + 1;
      piVar1 = (int *)(unaff_EBP + -0x18);
      *piVar1 = *piVar1 + -1;
    } while (*piVar1 != 0);
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puStack_98 = (undefined4 *)0x3af;
  piStack_9c = (int *)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -4) = 2;
  iStack_a0 = 0x762513;
  piVar4 = (int *)FUN_00679d86();
  iStack_a0 = *piVar4;
  puStack_98 = (undefined4 *)0x0;
  piStack_9c = (int *)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0040381b();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    puStack_98 = (undefined4 *)(*(int *)(unaff_EBP + -0x18) + -0xc);
    piStack_9c = (int *)0x76253b;
    FUN_00403384();
  }
  puStack_98 = &DAT_00980690;
  piStack_9c = (int *)0x76254a;
  FUN_00403191();
  puStack_98 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piStack_9c = (int *)0x762557;
  FUN_00403191();
  piVar4 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piVar4 == (int *)0x0) {
    puStack_98 = (undefined4 *)0x80004003;
    piStack_9c = (int *)0x76256c;
    FUN_00878dfb();
    piVar4 = *(int **)(unaff_EBP + -0x10);
  }
  uVar2 = *(undefined4 *)(extraout_ECX + 0x20);
  iStack_a0 = *(int *)(unaff_EBP + -0x38);
  iVar5 = *piVar4;
  piStack_9c = *(int **)(unaff_EBP + -0x34);
  puStack_98 = *(undefined4 **)(unaff_EBP + -0x30);
  uVar3 = *(undefined4 *)(extraout_ECX + 0x1c);
  *(int **)(unaff_EBP + -0x18) = piVar4;
  iVar5 = (**(code **)(iVar5 + 0x2c))
                    (piVar4,uVar3,uVar2,*(undefined4 *)(unaff_EBP + -0x2c),
                     *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                     *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x3c));
  if (iVar5 < 0) {
    FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x3c);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar4 = *(int **)(unaff_EBP + -0x10);
  iVar5 = (**(code **)(*piVar4 + 0x70))(piVar4,0);
  if (iVar5 < 0) {
    FUN_00878e09(iVar5,piVar4,&DAT_00963cc8);
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar4 = *(int **)(unaff_EBP + -0x10);
  iVar5 = (**(code **)(*piVar4 + 0x78))(piVar4,0);
  if (iVar5 < 0) {
    FUN_00878e09(iVar5,piVar4,&DAT_00963cc8);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piVar4 = (int *)FUN_004489f5(unaff_EBP + -0x1c);
  iVar5 = *piVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (iVar5 == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_004250ac(unaff_EBP + -0x8c,*(undefined4 *)(unaff_EBP + -0x10),unaff_EBP + -0x3c,
               unaff_EBP + -0x4c,unaff_EBP + -0x5c,unaff_EBP + -0x6c,unaff_EBP + -0x7c);
  iVar5 = FUN_00402bc3(unaff_EBP + -0x8c);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  piVar4 = *(int **)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x3c);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x4c);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x5c);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x6c);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x7c);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  piVar4 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


