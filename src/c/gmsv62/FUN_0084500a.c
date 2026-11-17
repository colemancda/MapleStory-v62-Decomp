/* FUN_0084500a - 0x0084500a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0084500a(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  int unaff_EBP;
  undefined1 *puStack_70;
  undefined1 *puStack_6c;
  int iStack_68;
  int iStack_64;
  int *piStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  
  FUN_00879bb8();
  uStack_58 = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x1c) = extraout_ECX;
  iStack_5c = 0x845025;
  iVar1 = FUN_0083ae79();
  if (iVar1 == 0) goto LAB_008452ab;
  uStack_58 = 0;
  iStack_5c = 500;
  piStack_60 = (int *)0x84503d;
  iVar1 = FUN_004becbc();
  if (iVar1 == 0) goto LAB_008452ab;
  uStack_58 = *(undefined4 *)(unaff_EBP + 0xc);
  iStack_5c = unaff_EBP + -0x14;
  piStack_60 = (int *)0x845057;
  FUN_00552e70();
  piStack_60 = (int *)0x0;
  iStack_64 = 0;
  puStack_70 = (undefined1 *)&iStack_68;
  *(int **)(unaff_EBP + -0x18) = &iStack_68;
  puStack_6c = (undefined1 *)0x8e8;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00679e4e();
  puStack_6c = (undefined1 *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_70 = (undefined1 *)0x845083;
  FUN_0040263d();
  puStack_70 = (undefined1 *)0x84508a;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_68 = 0x845095;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x20) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 != 0) {
    piStack_60 = (int *)(unaff_EBP + -0x20);
    iStack_64 = 0x8450ab;
    piStack_60 = (int *)FUN_00404b30();
    if (((int)piStack_60 < 0) && (piStack_60 != (int *)0x80004002)) {
      iStack_64 = 0x8450bc;
      FUN_00878dfb();
    }
  }
  piStack_60 = (int *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_64 = 0x8450c9;
  iVar1 = FUN_00402bc3();
  iStack_64 = (int)piStack_60;
  if (iVar1 < 0) {
    iStack_64 = 0x8450d4;
    piStack_60 = (int *)iVar1;
    FUN_00878dfb();
    iStack_64 = extraout_ECX_00;
  }
  piStack_60 = (int *)0x3b9ac9ff;
  puStack_6c = (undefined1 *)&iStack_64;
  *(int **)(unaff_EBP + -0x18) = &iStack_64;
  iStack_68 = 0x8e9;
  puStack_70 = (undefined1 *)0x8450ec;
  FUN_00679e4e();
  iStack_68 = unaff_EBP + -0x54;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_6c = (undefined1 *)0x8450fc;
  FUN_0040263d();
  puStack_6c = (undefined1 *)0x845103;
  iStack_64 = FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_68 = 0x84510d;
  uVar2 = FUN_00412550();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  iStack_68 = unaff_EBP + -0x54;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_6c = (undefined1 *)0x84511d;
  piStack_60 = (int *)FUN_00402bc3();
  if ((int)piStack_60 < 0) {
    iStack_64 = 0x84512a;
    FUN_00878dfb();
  }
  piStack_60 = (int *)0x0;
  puStack_6c = (undefined1 *)&iStack_64;
  *(int **)(unaff_EBP + -0x24) = &iStack_64;
  iStack_68 = 0x8eb;
  puStack_70 = (undefined1 *)0x84513e;
  FUN_00679e4e();
  iStack_68 = unaff_EBP + -0x54;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_6c = (undefined1 *)0x84514e;
  FUN_0040263d();
  puStack_6c = (undefined1 *)0x845155;
  iStack_64 = FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_68 = 0x84515f;
  iVar1 = FUN_00412550();
  iStack_68 = unaff_EBP + -0x54;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_6c = (undefined1 *)0x845174;
  piStack_60 = (int *)FUN_00402bc3();
  if ((int)piStack_60 < 0) {
    iStack_64 = 0x845181;
    FUN_00878dfb();
  }
  piStack_60 = (int *)0x845186;
  iVar3 = FUN_00429303();
  uVar4 = *(uint *)(iVar3 + 0x108) >> 5 & 1;
  *(uint *)(unaff_EBP + -0x24) = uVar4;
  if (uVar4 == 0) {
    if (*(int *)(unaff_EBP + -0x18) != 999999999) {
      piStack_60 = (int *)0x8451b6;
      iVar3 = FUN_00429303();
      uVar4 = *(uint *)(iVar3 + 0x108) >> 8 & 1;
      *(uint *)(unaff_EBP + -0x24) = uVar4;
      if (uVar4 != 0) {
        *(undefined1 ***)(unaff_EBP + 0xc) = &puStack_70;
        puStack_70 = extraout_ECX_02;
        goto LAB_008451a1;
      }
      if (iVar1 == 0) {
        piStack_60 = (int *)0x8451dc;
        FUN_00429303();
        piStack_60 = *(int **)(unaff_EBP + -0x18);
        iStack_64 = 0x8451ea;
        iStack_64 = FUN_004f162d();
        iStack_68 = 0x8451f0;
        iVar1 = FUN_0084af05();
        if (iVar1 == 0) {
          puStack_70 = (undefined1 *)piStack_60;
          *(undefined1 ***)(unaff_EBP + 0xc) = &puStack_70;
          uVar2 = 0xb63;
          goto LAB_00845205;
        }
      }
    }
    piStack_60 = (int *)0x0;
    iStack_64 = 0;
    iStack_68 = 0x4e;
    puStack_6c = (undefined1 *)0x845223;
    FUN_0060142b();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    piStack_60 = (int *)0x84522c;
    piStack_60 = (int *)FUN_007d1e08();
    iStack_64 = 0x845235;
    FUN_00457d37();
    piStack_60 = *(int **)(unaff_EBP + 8);
    iStack_64 = 0x845240;
    FUN_0045d247();
    piStack_60 = *(int **)(unaff_EBP + 0xc);
    iStack_64 = 0x84524b;
    FUN_00457d37();
    piStack_60 = (int *)(unaff_EBP + -0x34);
    iStack_64 = 0x84525a;
    FUN_004751b2();
    iVar1 = *(int *)(unaff_EBP + -0x1c);
    *(undefined4 *)(iVar1 + 0x208c) = 1;
    piStack_60 = (int *)0x84526c;
    uVar2 = FUN_007d1e08();
    piStack_60 = (int *)0x1d;
    iStack_64 = *(int *)(unaff_EBP + 0xc);
    *(undefined4 *)(iVar1 + 0x2090) = uVar2;
    iStack_68 = 0x84527c;
    FUN_007d3d3e();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    piStack_60 = (int *)0x84528a;
    FUN_0045ebca();
  }
  else {
    *(undefined1 ***)(unaff_EBP + 0xc) = &puStack_70;
    puStack_70 = extraout_ECX_01;
LAB_008451a1:
    uVar2 = 0x121;
LAB_00845205:
    piStack_60 = (int *)0x0;
    iStack_64 = 0;
    iStack_68 = 0;
    puStack_6c = (undefined1 *)0x0;
    FUN_00679d22(&puStack_70,uVar2);
    FUN_007db3ad();
  }
  piStack_60 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piStack_60 != (int *)0x0) {
    iStack_64 = 0x84529a;
    (**(code **)(*piStack_60 + 8))();
  }
  piStack_60 = *(int **)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_60 != (int *)0x0) {
    iStack_64 = 0x8452ab;
    (**(code **)(*piStack_60 + 8))();
  }
LAB_008452ab:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


