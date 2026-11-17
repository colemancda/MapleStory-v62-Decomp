/* FUN_005bdf86 - 0x005bdf86 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005bdf86(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *extraout_ECX;
  undefined4 *extraout_ECX_00;
  int unaff_EBP;
  int *piStack_f4;
  undefined4 *local_f0;
  
  FUN_00879bb8();
  local_f0 = (undefined4 *)0x5bdfa3;
  cVar1 = FUN_0042452b();
  local_f0 = (undefined4 *)0x5bdfae;
  uVar2 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = uVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  local_f0 = (undefined4 *)(unaff_EBP + -0x18);
  piStack_f4 = (int *)(unaff_EBP + -0x2c);
  iVar3 = FUN_005be519();
  if (iVar3 != 0) {
    local_f0 = *(undefined4 **)(unaff_EBP + -0x14);
    *(int ***)(unaff_EBP + 8) = &piStack_f4;
    piStack_f4 = extraout_ECX;
    FUN_005be4b7();
    FUN_005be385();
    if (cVar1 == '\0') {
      *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x18);
      local_f0 = (undefined4 *)0x5be003;
      FUN_00434bee();
      local_f0 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      piStack_f4 = (int *)0x5be015;
      FUN_00403191();
      local_f0 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      piStack_f4 = (int *)0x5be025;
      FUN_00403191();
      piVar4 = *(int **)(unaff_EBP + -0x10);
      iVar3 = *(int *)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (piVar4 == (int *)0x0) {
        local_f0 = (undefined4 *)0x80004003;
        piStack_f4 = (int *)0x5be03f;
        FUN_00878dfb();
        piVar4 = *(int **)(unaff_EBP + -0x10);
      }
      uVar2 = *(undefined4 *)(iVar3 + 0x28);
      piStack_f4 = *(int **)(unaff_EBP + -0x54);
      local_f0 = *(undefined4 **)(unaff_EBP + -0x50);
      *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(iVar3 + 0x24);
      iVar3 = *piVar4;
      *(int **)(unaff_EBP + -0x20) = piVar4;
      iVar3 = (**(code **)(iVar3 + 0x90))
                        (piVar4,*(undefined4 *)(unaff_EBP + -0x24),uVar2,
                         *(undefined4 *)(unaff_EBP + -0xdc),*(undefined4 *)(unaff_EBP + -0xd8),
                         *(undefined4 *)(unaff_EBP + -0xd4),*(undefined4 *)(unaff_EBP + -0xd0),
                         *(undefined4 *)(unaff_EBP + -0x5c),*(undefined4 *)(unaff_EBP + -0x58));
      if (iVar3 < 0) {
        FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x20),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb();
      }
      piVar4 = *(int **)(unaff_EBP + -0x10);
      iVar3 = (**(code **)(*piVar4 + 0x80))(piVar4,0);
      if (iVar3 < 0) {
        local_f0 = (undefined4 *)&DAT_00963de8;
        piStack_f4 = piVar4;
        FUN_00878e09(iVar3);
      }
      *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x14);
      local_f0 = (undefined4 *)0x5be0fc;
      FUN_00424ed4();
      local_f0 = (undefined4 *)0x3;
      piStack_f4 = (int *)0x0;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (*(int *)(unaff_EBP + 8) == 0) {
        local_f0 = (undefined4 *)0x80004003;
        piStack_f4 = (int *)0x5be123;
        FUN_00878dfb();
      }
      local_f0 = (undefined4 *)(unaff_EBP + -0x3c);
      piStack_f4 = (int *)(unaff_EBP + -0x1c);
      FUN_00425067();
      local_f0 = (undefined4 *)(unaff_EBP + -0x3c);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      piStack_f4 = (int *)0x5be140;
      local_f0 = (undefined4 *)FUN_00402bc3();
      if ((int)local_f0 < 0) {
        piStack_f4 = (int *)0x5be14b;
        FUN_00878dfb();
      }
      local_f0 = (undefined4 *)0x3;
      piStack_f4 = (int *)0xfffffffe;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      if (*(int *)(unaff_EBP + 8) == 0) {
        local_f0 = (undefined4 *)0x80004003;
        piStack_f4 = (int *)0x5be166;
        FUN_00878dfb();
      }
      local_f0 = (undefined4 *)(unaff_EBP + -0x7c);
      piStack_f4 = (int *)(unaff_EBP + -0x28);
      FUN_0041141a();
      local_f0 = (undefined4 *)0x5be17e;
      FUN_004125e6();
      local_f0 = (undefined4 *)(unaff_EBP + -0x7c);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      piStack_f4 = (int *)0x5be18b;
      local_f0 = (undefined4 *)FUN_00402bc3();
      if ((int)local_f0 < 0) {
        piStack_f4 = (int *)0x5be196;
        FUN_00878dfb();
      }
      local_f0 = &DAT_00980690;
      piStack_f4 = (int *)0x5be1a2;
      FUN_00403191();
      local_f0 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 9;
      piStack_f4 = (int *)0x5be1af;
      FUN_00403191();
      local_f0 = (undefined4 *)0x3;
      piStack_f4 = (int *)0x0;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      FUN_004031b7();
      local_f0 = (undefined4 *)0x3;
      piStack_f4 = (int *)0xffffffff;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      FUN_004031b7();
      local_f0 = (undefined4 *)0x3;
      piStack_f4 = (int *)0x3e8;
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      if (*(int *)(unaff_EBP + 8) == 0) {
        local_f0 = (undefined4 *)0x80004003;
        piStack_f4 = (int *)0x5be1f5;
        FUN_00878dfb();
      }
      local_f0 = (undefined4 *)(unaff_EBP + -0x8c);
      piStack_f4 = (int *)(unaff_EBP + -0x6c);
      FUN_004250ac(unaff_EBP + -0xec,*(undefined4 *)(unaff_EBP + -0x1c),unaff_EBP + -0xbc,
                   unaff_EBP + -0x9c,unaff_EBP + -0x4c);
      local_f0 = (undefined4 *)(unaff_EBP + -0xec);
      piStack_f4 = (int *)0x5be230;
      local_f0 = (undefined4 *)FUN_00402bc3();
      if ((int)local_f0 < 0) {
        piStack_f4 = (int *)0x5be23b;
        FUN_00878dfb();
      }
      local_f0 = (undefined4 *)(unaff_EBP + -0xbc);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      piStack_f4 = (int *)0x5be24b;
      local_f0 = (undefined4 *)FUN_00402bc3();
      if ((int)local_f0 < 0) {
        piStack_f4 = (int *)0x5be256;
        FUN_00878dfb();
      }
      local_f0 = (undefined4 *)(unaff_EBP + -0x9c);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      piStack_f4 = (int *)0x5be266;
      local_f0 = (undefined4 *)FUN_00402bc3();
      if ((int)local_f0 < 0) {
        piStack_f4 = (int *)0x5be271;
        FUN_00878dfb();
      }
      local_f0 = (undefined4 *)(unaff_EBP + -0x4c);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      piStack_f4 = (int *)0x5be27e;
      local_f0 = (undefined4 *)FUN_00402bc3();
      if ((int)local_f0 < 0) {
        piStack_f4 = (int *)0x5be289;
        FUN_00878dfb();
      }
      local_f0 = (undefined4 *)(unaff_EBP + -0x6c);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      piStack_f4 = (int *)0x5be296;
      local_f0 = (undefined4 *)FUN_00402bc3();
      if ((int)local_f0 < 0) {
        piStack_f4 = (int *)0x5be2a1;
        FUN_00878dfb();
      }
      local_f0 = (undefined4 *)(unaff_EBP + -0x8c);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      piStack_f4 = (int *)0x5be2b1;
      local_f0 = (undefined4 *)FUN_00402bc3();
      if ((int)local_f0 < 0) {
        piStack_f4 = (int *)0x5be2bc;
        FUN_00878dfb();
      }
      local_f0 = &DAT_00980690;
      piStack_f4 = (int *)0x5be2c8;
      FUN_00403191();
      local_f0 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      piStack_f4 = (int *)0x5be2d8;
      FUN_00403191();
      local_f0 = (undefined4 *)(unaff_EBP + -0xcc);
      piStack_f4 = (int *)(unaff_EBP + -0xac);
      uVar2 = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      FUN_00424e27(0);
      FUN_00425139(uVar2);
      local_f0 = (undefined4 *)(unaff_EBP + -0xac);
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      piStack_f4 = (int *)0x5be30b;
      local_f0 = (undefined4 *)FUN_00402bc3();
      if ((int)local_f0 < 0) {
        piStack_f4 = (int *)0x5be316;
        FUN_00878dfb();
      }
      local_f0 = (undefined4 *)(unaff_EBP + -0xcc);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      piStack_f4 = (int *)0x5be326;
      puVar5 = (undefined4 *)FUN_00402bc3();
      if ((int)puVar5 < 0) {
        piStack_f4 = (int *)0x5be331;
        local_f0 = puVar5;
        FUN_00878dfb();
        local_f0 = extraout_ECX_00;
      }
      piStack_f4 = (int *)(unaff_EBP + 8);
      *(undefined4 ***)(unaff_EBP + -0x20) = &local_f0;
      FUN_0041160e();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      piStack_f4 = (int *)0x5be349;
      FUN_00424e82();
      piStack_f4 = (int *)0x5be350;
      FUN_00427af9();
      local_f0 = (undefined4 *)0x5be358;
      FUN_004125e6();
      local_f0 = (undefined4 *)0x5be360;
      FUN_00412600();
      local_f0 = (undefined4 *)0x5be368;
      FUN_004125d9();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_f0 = (undefined4 *)0x5be374;
  FUN_005be4d4();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


