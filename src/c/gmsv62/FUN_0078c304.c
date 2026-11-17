/* FUN_0078c304 - 0x0078c304 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0078c304(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  int *extraout_ECX;
  undefined4 *extraout_ECX_00;
  int unaff_EBP;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puStack_fc;
  int *piStack_f8;
  undefined4 *puStack_f4;
  int *piStack_f0;
  undefined *puStack_ec;
  int *piStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  int *piStack_cc;
  undefined4 *puStack_c8;
  int *piStack_c4;
  undefined4 *puStack_c0;
  int *piStack_bc;
  undefined4 uStack_b8;
  int iStack_b4;
  int iStack_b0;
  undefined *puStack_ac;
  int *piStack_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  int *piStack_9c;
  
  FUN_00879bb8();
  if (extraout_ECX[0x149] != 0) goto LAB_0078ce14;
  (**(code **)(*extraout_ECX + 4))();
  *(int **)(unaff_EBP + -0x24) = extraout_ECX + 0x1e;
  uVar1 = FUN_0043f90a();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar1;
  iVar2 = FUN_00413367();
  if ((iVar2 == 0) || (*(int *)(unaff_EBP + -0x20) == 0x26)) {
    if (extraout_ECX[0x350] == 0) {
      FUN_00878dfb();
    }
    uVar4 = FUN_0042503d();
    if ((uVar4 & 0xff000000) == 0) goto LAB_0078ce14;
    if (extraout_ECX[0x350] == 0) {
      FUN_00878dfb();
    }
    piVar5 = (int *)extraout_ECX[0x350];
    iStack_a0 = (**(code **)(*piVar5 + 0xe0))();
    if (iStack_a0 < 0) {
      uStack_a4 = 0x78c885;
      piStack_9c = piVar5;
      FUN_00878e09();
    }
    piStack_9c = (int *)0xfffffffe;
    iStack_a0 = 0x78c891;
    FUN_004031b7();
    iVar2 = extraout_ECX[0x350];
    *(undefined4 *)(unaff_EBP + -4) = 10;
    if (iVar2 == 0) {
      piStack_9c = (int *)0x78c8a9;
      FUN_00878dfb();
    }
    piStack_9c = (int *)(unaff_EBP + -0x28);
    iStack_a0 = 0x78c8bc;
    FUN_0041141a();
    FUN_004125e6();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    piStack_9c = (int *)0x78c8d1;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_9c = (int *)0x78c8dc;
      FUN_00878dfb();
    }
    iVar2 = extraout_ECX[0x138];
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    if ((iVar2 == 0) && (extraout_ECX[0x13d] == 0)) {
      iVar2 = *(int *)(unaff_EBP + -0x20);
      if ((((iVar2 == 0x24) || (iVar2 == 0x25)) || (iVar2 == 0x69)) || (iVar2 == 0x68))
      goto LAB_0078cc3a;
LAB_0078c909:
      *(uint *)(unaff_EBP + -0x34) = (-(uint)((extraout_ECX[0x14b] & 1U) != 0) & 0x3c) - 0x1e;
    }
    else {
      if ((*(int *)(unaff_EBP + -0x20) != 9) && (*(int *)(unaff_EBP + -0x20) != 10))
      goto LAB_0078c909;
LAB_0078cc3a:
      *(undefined4 *)(unaff_EBP + -0x30) = 0x32;
    }
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0xb;
    piStack_9c = (int *)0x78c935;
    FUN_00403191();
    piStack_9c = (int *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_a0 = 0x78c944;
    FUN_004031b7();
    bVar6 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (bVar6) {
      piStack_9c = (int *)0x78c95a;
      FUN_00878dfb();
    }
    piStack_9c = (int *)(unaff_EBP + -0x7c);
    iStack_a0 = 0;
    uStack_a4 = 0;
    piStack_a8 = (int *)0x0;
    puStack_ac = (undefined *)0x0;
    iStack_b0 = 0;
    iStack_b4 = unaff_EBP + -0x28;
    uStack_b8 = 0x78c976;
    puVar3 = (undefined4 *)FUN_0042a39f();
    piStack_9c = (int *)0x78c980;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
               (IBinding *)*puVar3);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    piStack_9c = (int *)0x78c995;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_9c = (int *)0x78c9a0;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    piStack_9c = (int *)0x78c9ad;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_9c = (int *)0x78c9b8;
      FUN_00878dfb();
    }
    if (extraout_ECX[0x34f] == 0) {
      piStack_9c = (int *)0x78c9ca;
      FUN_00878dfb();
    }
    piStack_9c = (int *)0x78c9dc;
    puVar3 = (undefined4 *)FUN_004308ad();
    piVar5 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    if (piVar5 == (int *)0x0) {
      piStack_9c = (int *)0x78c9f3;
      FUN_00878dfb();
      piVar5 = *(int **)(unaff_EBP + -0x10);
    }
    iVar2 = *piVar5;
    uStack_a4 = *puVar3;
    iStack_a0 = puVar3[1];
    piStack_9c = (int *)puVar3[2];
    *(int **)(unaff_EBP + -0x28) = piVar5;
    puStack_ac = (undefined *)0x78ca08;
    piStack_a8 = piVar5;
    iVar2 = (**(code **)(iVar2 + 100))();
    if (iVar2 < 0) {
      puStack_ac = &DAT_00963de8;
      iStack_b0 = *(undefined4 *)(unaff_EBP + -0x28);
      uStack_b8 = 0x78ca1a;
      iStack_b4 = iVar2;
      FUN_00878e09();
    }
    puStack_ac = (undefined *)(unaff_EBP + -0x8c);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_b0 = 0x78ca2a;
    puStack_ac = (undefined *)FUN_00402bc3();
    if ((int)puStack_ac < 0) {
      iStack_b0 = 0x78ca35;
      FUN_00878dfb();
    }
    iStack_b0 = extraout_ECX[0x34f];
    puStack_ac = (undefined *)0x1;
    iStack_b4 = 0x78ca46;
    FUN_0040ee87();
    piStack_bc = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    if (piStack_bc == (int *)0x0) {
      puStack_ac = (undefined *)0x80004003;
      iStack_b0 = 0x78ca5b;
      FUN_00878dfb();
      piStack_bc = *(int **)(unaff_EBP + -0x10);
    }
    iVar2 = *piStack_bc;
    uStack_b8 = *(undefined4 *)(unaff_EBP + -0x7c);
    iStack_b4 = *(undefined4 *)(unaff_EBP + -0x78);
    iStack_b0 = *(undefined4 *)(unaff_EBP + -0x74);
    *(int **)(unaff_EBP + -0x28) = piStack_bc;
    puStack_ac = *(undefined **)(unaff_EBP + -0x70);
    puStack_c0 = (undefined4 *)0x78ca76;
    iVar2 = (**(code **)(iVar2 + 0xfc))();
    if (iVar2 < 0) {
      puStack_c0 = (undefined4 *)&DAT_00963df8;
      piStack_c4 = *(int **)(unaff_EBP + -0x28);
      piStack_cc = (int *)0x78ca88;
      puStack_c8 = (undefined4 *)iVar2;
      FUN_00878e09();
    }
    puStack_c0 = (undefined4 *)(unaff_EBP + -0x7c);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    piStack_c4 = (int *)0x78ca95;
    puStack_c0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_c0 < 0) {
      piStack_c4 = (int *)0x78caa0;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      puStack_c0 = (undefined4 *)0x80004003;
      piStack_c4 = (int *)0x78cab0;
      FUN_00878dfb();
    }
    piVar5 = *(int **)(unaff_EBP + -0x10);
    puStack_c0 = (undefined4 *)0xffffffff;
    puStack_c8 = (undefined4 *)0x78cabe;
    piStack_c4 = piVar5;
    iVar2 = (**(code **)(*piVar5 + 0xe0))();
    if (iVar2 < 0) {
      puStack_c8 = (undefined4 *)&DAT_00963df8;
      uStack_d4 = 0x78cace;
      iStack_d0 = iVar2;
      piStack_cc = piVar5;
      FUN_00878e09();
    }
    puStack_c8 = &DAT_00980690;
    piStack_cc = (int *)0x78cadc;
    FUN_00403191();
    puStack_c8 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    piStack_cc = (int *)0x78cae9;
    FUN_00403191();
    piStack_f0 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    if (piStack_f0 == (int *)0x0) {
      puStack_c8 = (undefined4 *)0x80004003;
      piStack_cc = (int *)0x78cafe;
      FUN_00878dfb();
      piStack_f0 = *(int **)(unaff_EBP + -0x10);
    }
    uStack_d4 = *(undefined4 *)(unaff_EBP + -0x6c);
    iStack_d0 = *(undefined4 *)(unaff_EBP + -0x68);
    iVar2 = *piStack_f0;
    piStack_cc = *(int **)(unaff_EBP + -100);
    puStack_c8 = *(undefined4 **)(unaff_EBP + -0x60);
    piStack_e8 = *(int **)(unaff_EBP + -0x30);
    puStack_ec = *(undefined **)(unaff_EBP + -0x34);
    uStack_e4 = *(undefined4 *)(unaff_EBP + -0x7c);
    uStack_e0 = *(undefined4 *)(unaff_EBP + -0x78);
    uStack_dc = *(undefined4 *)(unaff_EBP + -0x74);
    *(int **)(unaff_EBP + -0x28) = piStack_f0;
    uStack_d8 = *(undefined4 *)(unaff_EBP + -0x70);
    puStack_f4 = (undefined4 *)0x78cb2b;
    puVar3 = (undefined4 *)(**(code **)(iVar2 + 0x90))();
    if ((int)puVar3 < 0) {
      puStack_f4 = (undefined4 *)&DAT_00963de8;
      piStack_f8 = *(int **)(unaff_EBP + -0x28);
      puStack_fc = puVar3;
      FUN_00878e09();
    }
    puStack_f4 = (undefined4 *)(unaff_EBP + -0x7c);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    piStack_f8 = (int *)0x78cb4a;
    puStack_f4 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_f4 < 0) {
      piStack_f8 = (int *)0x78cb57;
      FUN_00878dfb();
    }
    puStack_f4 = (undefined4 *)(unaff_EBP + -0x6c);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    piStack_f8 = (int *)0x78cb64;
    puStack_f4 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_f4 < 0) {
      piStack_f8 = (int *)0x78cb6f;
      FUN_00878dfb();
    }
    if (extraout_ECX[0x34f] == 0) {
      puStack_f4 = (undefined4 *)0x80004003;
      piStack_f8 = (int *)0x78cb81;
      FUN_00878dfb();
    }
    puStack_f4 = (undefined4 *)0x78cb8c;
    iVar2 = FUN_0043210d();
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      puStack_f4 = (undefined4 *)0x80004003;
      piStack_f8 = (int *)0x78cba3;
      FUN_00878dfb();
    }
    piVar5 = *(int **)(unaff_EBP + -0x10);
    puStack_fc = (undefined4 *)0x78cbb0;
    piStack_f8 = piVar5;
    puStack_f4 = (undefined4 *)(uint)(iVar2 != 0);
    iVar2 = (**(code **)(*piVar5 + 0xd8))();
    if (iVar2 < 0) {
      puStack_fc = (undefined4 *)&DAT_00963df8;
      FUN_00878e09(iVar2,piVar5);
    }
    iVar2 = *(int *)(unaff_EBP + -0x24);
    puStack_fc = (undefined4 *)0x78cbca;
    uVar4 = FUN_0043f6fe();
    iVar2 = *(int *)((uint)(uVar4 < 0x80000000) * 0x3f4 + 0x8ac + iVar2);
    puStack_fc = (undefined4 *)(iVar2 + 0x2f8);
    if ((*(int *)(iVar2 + 0x300) == 0) &&
       (FUN_0040e6e4(0x3eba9a,0x26), *(int *)(iVar2 + 0x300) == 0)) {
      *(undefined4 *)(unaff_EBP + -0x24) = 0x22000006;
      *(undefined4 *)(unaff_EBP + -0x28) = 0x22000006;
      puStack_fc = (undefined4 *)&DAT_008f7260;
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(unaff_EBP + -0x28);
    }
    uVar4 = *(uint *)(iVar2 + 0x304);
    while (uVar4 != 0) {
      iVar2 = *(int *)(uVar4 + 4);
      iVar10 = *(int *)((-(uint)(uVar4 != 0) & uVar4 - 0x10) + 4);
      uVar4 = -(uint)(iVar10 != 0) & iVar10 + 0x10U;
      puStack_fc = &DAT_00980690;
      FUN_00403191();
      puStack_fc = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      FUN_00424aee();
      puStack_fc = (undefined4 *)0x3;
      uVar1 = *(undefined4 *)(iVar2 + 0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      FUN_004295f1(uVar1);
      puStack_fc = (undefined4 *)0x3;
      uVar1 = *(undefined4 *)(iVar2 + 0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      FUN_004295f1(uVar1);
      puStack_fc = (undefined4 *)0x3;
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      FUN_004295f1(200);
      uVar1 = *(undefined4 *)(iVar2 + 0xc);
      puStack_fc = (undefined4 *)(unaff_EBP + -0x3c);
      iVar2 = unaff_EBP + -0x4c;
      iVar10 = unaff_EBP + -0x5c;
      iVar9 = unaff_EBP + -0x6c;
      iVar8 = unaff_EBP + -0x7c;
      iVar7 = unaff_EBP + -0x8c;
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      FUN_00424e27(iVar7,uVar1,iVar8,iVar9,iVar10,iVar2);
      FUN_004250ac(iVar7,uVar1,iVar8,iVar9,iVar10,iVar2);
      puStack_fc = (undefined4 *)(unaff_EBP + -0x8c);
      puStack_fc = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_fc < 0) {
        FUN_00878dfb();
      }
      puStack_fc = (undefined4 *)(unaff_EBP + -0x7c);
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      puStack_fc = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_fc < 0) {
        FUN_00878dfb();
      }
      puStack_fc = (undefined4 *)(unaff_EBP + -0x6c);
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      puStack_fc = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_fc < 0) {
        FUN_00878dfb();
      }
      puStack_fc = (undefined4 *)(unaff_EBP + -0x5c);
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      puStack_fc = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_fc < 0) {
        FUN_00878dfb();
      }
      puStack_fc = (undefined4 *)(unaff_EBP + -0x4c);
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      puStack_fc = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_fc < 0) {
        FUN_00878dfb();
      }
      puStack_fc = (undefined4 *)(unaff_EBP + -0x3c);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      puStack_fc = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_fc < 0) {
        FUN_00878dfb();
      }
    }
    puStack_fc = &DAT_00980690;
    FUN_00424aee();
    puStack_fc = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    FUN_00424aee();
    puStack_fc = (undefined4 *)(unaff_EBP + -0x5c);
    iVar2 = unaff_EBP + -0x6c;
    uVar1 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    FUN_00424e27(0,iVar2);
    FUN_00425139(uVar1,iVar2);
    puStack_fc = (undefined4 *)(unaff_EBP + -0x6c);
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    puStack_fc = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_fc < 0) {
      FUN_00878dfb();
    }
    puStack_fc = (undefined4 *)(unaff_EBP + -0x5c);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puVar3 = (undefined4 *)FUN_00402bc3();
    if ((int)puVar3 < 0) {
      puStack_fc = puVar3;
      FUN_00878dfb();
      puStack_fc = extraout_ECX_00;
    }
    *(undefined4 ***)(unaff_EBP + -0x28) = &puStack_fc;
    FUN_0041160e(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_00424e82();
    FUN_00427af9();
    puStack_fc = (undefined4 *)0x78ce14;
    FUN_00412600();
    goto LAB_0078ce14;
  }
  iVar2 = FUN_0078ce23();
  if (iVar2 == 0) {
    if (extraout_ECX[0x350] == 0) {
      FUN_00878dfb();
    }
    piVar5 = (int *)extraout_ECX[0x350];
    iVar2 = *piVar5;
  }
  else {
    if (extraout_ECX[0x350] == 0) {
      FUN_00878dfb();
    }
    piVar5 = (int *)extraout_ECX[0x350];
    iVar2 = *piVar5;
  }
  iStack_a0 = (**(code **)(iVar2 + 0xe0))();
  if (iStack_a0 < 0) {
    uStack_a4 = 0x78c3c5;
    piStack_9c = piVar5;
    FUN_00878e09();
  }
  piStack_9c = (int *)0xfffffffe;
  iStack_a0 = 0x78c3d1;
  FUN_004031b7();
  iVar2 = extraout_ECX[0x350];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    piStack_9c = (int *)0x78c3e7;
    FUN_00878dfb();
  }
  piStack_9c = (int *)(unaff_EBP + -0x28);
  iStack_a0 = 0x78c3fa;
  FUN_0041141a();
  FUN_004125e6();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_9c = (int *)0x78c40f;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_9c = (int *)0x78c41a;
    FUN_00878dfb();
  }
  iVar2 = extraout_ECX[0x138];
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if ((iVar2 == 0) && (extraout_ECX[0x13d] == 0)) {
    iVar2 = *(int *)(unaff_EBP + -0x20);
    if ((((iVar2 == 0x24) || (iVar2 == 0x25)) || (iVar2 == 0x69)) || (iVar2 == 0x68))
    goto LAB_0078c6a4;
LAB_0078c448:
    *(uint *)(unaff_EBP + -0x14) = (-(uint)((extraout_ECX[0x14b] & 1U) != 0) & 0x3c) - 0x1e;
  }
  else {
    if ((*(int *)(unaff_EBP + -0x20) != 9) && (*(int *)(unaff_EBP + -0x20) != 10))
    goto LAB_0078c448;
LAB_0078c6a4:
    *(undefined4 *)(unaff_EBP + -0x10) = 0x32;
  }
  if (extraout_ECX[0x350] == 0) {
    piStack_9c = (int *)0x78c46b;
    FUN_00878dfb();
  }
  piStack_9c = (int *)0x78c47a;
  FUN_004308ad();
  iVar2 = extraout_ECX[0x350];
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar2 == 0) {
    piStack_9c = (int *)0x78c48f;
    FUN_00878dfb();
  }
  piStack_a8 = (int *)extraout_ECX[0x350];
  *(undefined4 *)(unaff_EBP + -0x6c) = DAT_0097bb30;
  *(undefined4 *)(unaff_EBP + -0x68) = DAT_0097bb34;
  iVar2 = *piStack_a8;
  *(undefined4 *)(unaff_EBP + -100) = DAT_0097bb38;
  *(undefined4 *)(unaff_EBP + -0x60) = DAT_0097bb3c;
  uStack_a4 = *(undefined4 *)(unaff_EBP + -0x6c);
  iStack_a0 = *(undefined4 *)(unaff_EBP + -0x68);
  piStack_9c = *(int **)(unaff_EBP + -100);
  *(int **)(unaff_EBP + -0x28) = piStack_a8;
  puStack_ac = (undefined *)0x78c4b6;
  iVar2 = (**(code **)(iVar2 + 100))();
  if (iVar2 < 0) {
    puStack_ac = &DAT_00963de8;
    iStack_b0 = *(undefined4 *)(unaff_EBP + -0x28);
    uStack_b8 = 0x78c4c8;
    iStack_b4 = iVar2;
    FUN_00878e09();
  }
  if (extraout_ECX[0x350] == 0) {
    puStack_ac = (undefined *)0x80004003;
    iStack_b0 = 0x78c4db;
    FUN_00878dfb();
  }
  piStack_bc = (int *)extraout_ECX[0x350];
  iVar2 = *piStack_bc;
  uStack_b8 = *(undefined4 *)(unaff_EBP + -0x7c);
  iStack_b4 = *(undefined4 *)(unaff_EBP + -0x78);
  iStack_b0 = *(undefined4 *)(unaff_EBP + -0x74);
  *(int **)(unaff_EBP + -0x28) = piStack_bc;
  puStack_ac = *(undefined **)(unaff_EBP + -0x70);
  puStack_c0 = (undefined4 *)0x78c4f6;
  iVar2 = (**(code **)(iVar2 + 100))();
  if (iVar2 < 0) {
    puStack_c0 = (undefined4 *)&DAT_00963de8;
    piStack_c4 = *(int **)(unaff_EBP + -0x28);
    piStack_cc = (int *)0x78c508;
    puStack_c8 = (undefined4 *)iVar2;
    FUN_00878e09();
  }
  puStack_c0 = &DAT_00980690;
  piStack_c4 = (int *)0x78c515;
  FUN_00403191();
  iVar2 = extraout_ECX[0x350];
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar2 == 0) {
    puStack_c0 = (undefined4 *)0x80004003;
    piStack_c4 = (int *)0x78c52c;
    FUN_00878dfb();
  }
  puStack_c0 = (undefined4 *)0x78c537;
  iVar2 = FUN_0042a378();
  piStack_c4 = (int *)(iVar2 + 200);
  puStack_c0 = (undefined4 *)0x3;
  puStack_c8 = (undefined4 *)0x78c547;
  FUN_004031b7();
  iVar2 = extraout_ECX[0x350];
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar2 == 0) {
    puStack_c0 = (undefined4 *)0x80004003;
    piStack_c4 = (int *)0x78c55e;
    FUN_00878dfb();
  }
  piStack_e8 = (int *)extraout_ECX[0x350];
  piStack_cc = *(int **)(unaff_EBP + -0x4c);
  puStack_c8 = *(undefined4 **)(unaff_EBP + -0x48);
  iVar2 = *piStack_e8;
  piStack_c4 = *(int **)(unaff_EBP + -0x44);
  puStack_c0 = *(undefined4 **)(unaff_EBP + -0x40);
  uStack_e0 = *(undefined4 *)(unaff_EBP + -0x10);
  uStack_e4 = *(undefined4 *)(unaff_EBP + -0x14);
  uStack_dc = *(undefined4 *)(unaff_EBP + -0x3c);
  uStack_d8 = *(undefined4 *)(unaff_EBP + -0x38);
  uStack_d4 = *(undefined4 *)(unaff_EBP + -0x34);
  *(int **)(unaff_EBP + -0x28) = piStack_e8;
  iStack_d0 = *(undefined4 *)(unaff_EBP + -0x30);
  puStack_ec = (undefined *)0x78c58e;
  iVar2 = (**(code **)(iVar2 + 0x90))();
  if (iVar2 < 0) {
    puStack_ec = &DAT_00963de8;
    piStack_f0 = *(int **)(unaff_EBP + -0x28);
    piStack_f8 = (int *)0x78c5a0;
    puStack_f4 = (undefined4 *)iVar2;
    FUN_00878e09();
  }
  puStack_ec = (undefined *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_f0 = (int *)0x78c5ad;
  puStack_ec = (undefined *)FUN_00402bc3();
  if ((int)puStack_ec < 0) {
    piStack_f0 = (int *)0x78c5b8;
    FUN_00878dfb();
  }
  puStack_ec = (undefined *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_f0 = (int *)0x78c5c5;
  puStack_ec = (undefined *)FUN_00402bc3();
  if ((int)puStack_ec < 0) {
    piStack_f0 = (int *)0x78c5d0;
    FUN_00878dfb();
  }
  if (extraout_ECX[0x34f] == 0) {
    puStack_ec = (undefined *)0x80004003;
    piStack_f0 = (int *)0x78c5e9;
    FUN_00878dfb();
  }
  if (extraout_ECX[0x350] == 0) {
    puStack_ec = (undefined *)0x80004003;
    piStack_f0 = (int *)0x78c5fe;
    FUN_00878dfb();
  }
  piVar5 = (int *)extraout_ECX[0x350];
  puStack_ec = (undefined *)0x78c60b;
  puStack_ec = (undefined *)FUN_0043210d();
  puStack_f4 = (undefined4 *)0x78c615;
  piStack_f0 = piVar5;
  puVar3 = (undefined4 *)(**(code **)(*piVar5 + 0xd8))();
  if ((int)puVar3 < 0) {
    puStack_f4 = (undefined4 *)&DAT_00963df8;
    puStack_fc = puVar3;
    piStack_f8 = piVar5;
    FUN_00878e09();
  }
  iVar2 = *(int *)(unaff_EBP + -0x24);
  puStack_f4 = (undefined4 *)0x78c62f;
  uVar4 = FUN_0043f6fe();
  piStack_f8 = *(int **)(unaff_EBP + -0x20);
  iVar10 = *(int *)((uint)(uVar4 < 0x80000000) * 0x3f4 + 0x8ac + iVar2);
  iVar2 = iVar10 + (int)piStack_f8 * 0x14;
  if (*(int *)(iVar10 + 8 + (int)piStack_f8 * 0x14) == 0) {
    puStack_fc = (undefined4 *)0x3eba9a;
    puStack_f4 = (undefined4 *)iVar2;
    FUN_0040e6e4();
    if (*(int *)(iVar2 + 8) == 0) {
      *(undefined4 *)(unaff_EBP + -0x24) = 0x22000006;
      *(undefined4 *)(unaff_EBP + -0x28) = 0x22000006;
      puStack_f4 = (undefined4 *)&DAT_008f7260;
      piStack_f8 = (int *)(unaff_EBP + -0x28);
      *(undefined1 *)(unaff_EBP + -4) = 4;
                    /* WARNING: Subroutine does not return */
      puStack_fc = (undefined4 *)0x78c689;
      __CxxThrowException_8();
    }
  }
  uVar4 = *(uint *)(iVar2 + 0xc);
  while (uVar4 != 0) {
    iVar2 = *(int *)(uVar4 + 4);
    iVar10 = *(int *)((-(uint)(uVar4 != 0) & uVar4 - 0x10) + 4);
    uVar4 = -(uint)(iVar10 != 0) & iVar10 + 0x10U;
    puStack_f4 = &DAT_00980690;
    piStack_f8 = (int *)0x78c6e8;
    FUN_00403191();
    puStack_f4 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    piStack_f8 = (int *)0x78c6f9;
    FUN_00403191();
    piStack_f8 = *(int **)(iVar2 + 0x14);
    puStack_f4 = (undefined4 *)0x3;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    puStack_fc = (undefined4 *)0x78c70b;
    FUN_004031b7();
    piStack_f8 = *(int **)(iVar2 + 0x10);
    puStack_f4 = (undefined4 *)0x3;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    puStack_fc = (undefined4 *)0x78c71d;
    FUN_004031b7();
    puStack_f4 = (undefined4 *)0x3;
    piStack_f8 = (int *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    puStack_fc = (undefined4 *)0x78c72d;
    FUN_004031b7();
    iVar10 = extraout_ECX[0x350];
    uVar1 = *(undefined4 *)(iVar2 + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (iVar10 == 0) {
      puStack_f4 = (undefined4 *)0x80004003;
      piStack_f8 = (int *)0x78c747;
      FUN_00878dfb();
    }
    puStack_f4 = (undefined4 *)(unaff_EBP + -0x6c);
    piStack_f8 = (int *)(unaff_EBP + -0x5c);
    puStack_fc = (undefined4 *)(unaff_EBP + -0x1c);
    FUN_004250ac(unaff_EBP + -0x8c,uVar1,unaff_EBP + -0x4c,unaff_EBP + -0x3c);
    puStack_f4 = (undefined4 *)(unaff_EBP + -0x8c);
    piStack_f8 = (int *)0x78c77a;
    puStack_f4 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_f4 < 0) {
      piStack_f8 = (int *)0x78c785;
      FUN_00878dfb();
    }
    puStack_f4 = (undefined4 *)(unaff_EBP + -0x4c);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    piStack_f8 = (int *)0x78c792;
    puStack_f4 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_f4 < 0) {
      piStack_f8 = (int *)0x78c79d;
      FUN_00878dfb();
    }
    puStack_f4 = (undefined4 *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    piStack_f8 = (int *)0x78c7aa;
    puStack_f4 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_f4 < 0) {
      piStack_f8 = (int *)0x78c7b5;
      FUN_00878dfb();
    }
    puStack_f4 = (undefined4 *)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    piStack_f8 = (int *)0x78c7c2;
    puStack_f4 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_f4 < 0) {
      piStack_f8 = (int *)0x78c7cd;
      FUN_00878dfb();
    }
    puStack_f4 = (undefined4 *)(unaff_EBP + -0x5c);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    piStack_f8 = (int *)0x78c7da;
    puStack_f4 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_f4 < 0) {
      piStack_f8 = (int *)0x78c7e5;
      FUN_00878dfb();
    }
    puStack_f4 = (undefined4 *)(unaff_EBP + -0x6c);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    piStack_f8 = (int *)0x78c7f2;
    puStack_f4 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_f4 < 0) {
      piStack_f8 = (int *)0x78c801;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_f4 = (undefined4 *)(unaff_EBP + -0x7c);
  piStack_f8 = (int *)0x78c813;
  puStack_f4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_f4 < 0) {
    piStack_f8 = (int *)0x78c822;
    FUN_00878dfb();
  }
LAB_0078ce14:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


