/* FUN_006253a9 - 0x006253a9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006253a9(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int *piVar5;
  int unaff_EBP;
  undefined4 uStack_a0;
  undefined1 *puStack_9c;
  undefined1 *puStack_98;
  int iStack_94;
  int *piStack_90;
  
  FUN_00879bb8();
  piStack_90 = (int *)0x6253cb;
  puVar2 = (undefined4 *)(**(code **)(*(int *)(DAT_00978358 + 4) + 0x10))();
  uVar4 = *puVar2;
  *(undefined4 *)(unaff_EBP + -0x38) = puVar2[1];
  piStack_90 = (int *)(unaff_EBP + -0x2c);
  *(undefined4 *)(unaff_EBP + -0x3c) = uVar4;
  iStack_94 = 0x6253e5;
  iVar3 = FUN_00455c59();
  uVar1 = *(undefined4 *)(iVar3 + 4);
  piStack_90 = (int *)0x6253f0;
  FUN_0045e4a2();
  puStack_98 = (undefined1 *)(uint)*(ushort *)(extraout_ECX + 0xc);
  iStack_94 = *(int *)(extraout_ECX + 0x10);
  puStack_9c = (undefined1 *)0x625406;
  piStack_90 = (int *)uVar1;
  piStack_90 = (int *)FUN_0062dfd9();
  if ((piStack_90 != (int *)0x0) &&
     ((*(int *)(extraout_ECX + 0x14) == 1 || (piStack_90 == (int *)0xb)))) {
    iStack_94 = 0x62541f;
    FUN_00626c01();
    goto LAB_006258b1;
  }
  if (*(int *)(extraout_ECX + 0x14) == 0) {
    piStack_90 = (int *)(uint)*(ushort *)(extraout_ECX + 0xc);
    iStack_94 = 0x62543b;
    iVar3 = FUN_0062d4ce();
    if (iVar3 == 0) goto LAB_006254a1;
    piStack_90 = (int *)0x0;
    iStack_94 = 0;
    puStack_98 = (undefined1 *)0x62;
    puStack_9c = (undefined1 *)0x62544b;
    FUN_0060142b();
    piStack_90 = (int *)0x4;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_94 = 0x625458;
    FUN_00457cda();
    piStack_90 = (int *)(uint)*(ushort *)(extraout_ECX + 0xc);
    iStack_94 = 0x625467;
    FUN_0045d247();
    piStack_90 = *(int **)(extraout_ECX + 0x10);
    iStack_94 = 0x625472;
    FUN_00457d37();
    iStack_94 = 0x62547b;
    piStack_90 = (int *)uVar4;
    FUN_0045d247();
    piStack_90 = *(int **)(unaff_EBP + -0x38);
    iStack_94 = 0x625486;
    FUN_0045d247();
    piStack_90 = (int *)(unaff_EBP + -0x34);
    iStack_94 = 0x625495;
    FUN_004751b2();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_00625522:
    piStack_90 = (int *)0x625527;
    FUN_0045ebca();
    goto LAB_006258b1;
  }
LAB_006254a1:
  if (*(int *)(extraout_ECX + 0x14) == 1) {
    piStack_90 = (int *)(uint)*(ushort *)(extraout_ECX + 0xc);
    iStack_94 = 0x6254bd;
    iVar3 = FUN_0062d54c();
    if (iVar3 != 0) {
      piStack_90 = (int *)0x0;
      iStack_94 = 0;
      puStack_98 = (undefined1 *)0x62;
      puStack_9c = (undefined1 *)0x6254cd;
      FUN_0060142b();
      piStack_90 = (int *)0x5;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      iStack_94 = 0x6254de;
      FUN_00457cda();
      piStack_90 = (int *)(uint)*(ushort *)(extraout_ECX + 0xc);
      iStack_94 = 0x6254ed;
      FUN_0045d247();
      piStack_90 = *(int **)(extraout_ECX + 0x10);
      iStack_94 = 0x6254f8;
      FUN_00457d37();
      iStack_94 = 0x625501;
      piStack_90 = (int *)uVar4;
      FUN_0045d247();
      piStack_90 = *(int **)(unaff_EBP + -0x38);
      iStack_94 = 0x62550c;
      FUN_0045d247();
      piStack_90 = (int *)(unaff_EBP + -0x34);
      iStack_94 = 0x62551b;
      FUN_004751b2();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      goto LAB_00625522;
    }
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  piStack_90 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  iStack_94 = 0x625544;
  FUN_00403191();
  piStack_90 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_94 = 0x625551;
  FUN_00403191();
  piStack_90 = (int *)0x0;
  iStack_94 = 0;
  puStack_98 = (undefined1 *)(unaff_EBP + -0x6c);
  puStack_9c = (undefined1 *)(unaff_EBP + -0x5c);
  *(undefined4 **)(unaff_EBP + -0x24) = &uStack_a0;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00679e4e(&uStack_a0,0xc3e);
  iVar3 = unaff_EBP + -0x7c;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_98 = (undefined1 *)0x62559b;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x1c) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar3 != 0) {
    piStack_90 = (int *)(unaff_EBP + -0x1c);
    iStack_94 = 0x6255b1;
    piStack_90 = (int *)FUN_00404b30();
    if (((int)piStack_90 < 0) && (piStack_90 != (int *)0x80004002)) {
      iStack_94 = 0x6255c2;
      FUN_00878dfb();
    }
  }
  piStack_90 = (int *)(unaff_EBP + -0x7c);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_94 = 0x6255cf;
  piStack_90 = (int *)FUN_00402bc3();
  if ((int)piStack_90 < 0) {
    iStack_94 = 0x6255da;
    FUN_00878dfb();
  }
  piStack_90 = (int *)(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_94 = 0x6255e7;
  piStack_90 = (int *)FUN_00402bc3();
  if ((int)piStack_90 < 0) {
    iStack_94 = 0x6255f2;
    FUN_00878dfb();
  }
  piStack_90 = (int *)(unaff_EBP + -0x6c);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_94 = 0x6255ff;
  piStack_90 = (int *)FUN_00402bc3();
  if ((int)piStack_90 < 0) {
    iStack_94 = 0x62560a;
    FUN_00878dfb();
  }
  piStack_90 = (int *)0x625612;
  FUN_0087a1b0();
  piStack_90 = (int *)0x0;
  iStack_94 = 0;
  puStack_9c = (undefined1 *)(uint)*(ushort *)(extraout_ECX + 0xc);
  uStack_a0 = 0x625621;
  puStack_98 = &stack0xffffff74;
  puStack_9c = (undefined1 *)FUN_00412335();
  *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_98;
  uStack_a0 = 0x62562d;
  FUN_004033a1();
  puStack_9c = (undefined1 *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_a0 = 0x625640;
  FUN_0040263d();
  uStack_a0 = 0x625647;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  puStack_98 = (undefined1 *)0x625652;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x20) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar3 != 0) {
    piStack_90 = (int *)(unaff_EBP + -0x20);
    iStack_94 = 0x625668;
    piStack_90 = (int *)FUN_00404b30();
    if (((int)piStack_90 < 0) && (piStack_90 != (int *)0x80004002)) {
      iStack_94 = 0x625679;
      FUN_00878dfb();
    }
  }
  piStack_90 = (int *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_94 = 0x625689;
  piStack_90 = (int *)FUN_00402bc3();
  if ((int)piStack_90 < 0) {
    iStack_94 = 0x625694;
    FUN_00878dfb();
  }
  piStack_90 = (int *)0x62569c;
  FUN_0087a1b0();
  piStack_90 = (int *)0x0;
  iStack_94 = 0;
  puStack_9c = *(undefined1 **)(extraout_ECX + 0x14);
  uStack_a0 = 0x6256a9;
  puStack_98 = &stack0xffffff74;
  puStack_9c = (undefined1 *)FUN_00412335();
  *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_98;
  uStack_a0 = 0x6256b5;
  FUN_004033a1();
  puStack_9c = (undefined1 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  uStack_a0 = 0x6256c5;
  FUN_0040263d();
  uStack_a0 = 0x6256cc;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  puStack_98 = (undefined1 *)0x6256d7;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x24) = uVar4;
  piStack_90 = (int *)(unaff_EBP + -0x24);
  iStack_94 = 0x6256e8;
  piStack_90 = (int *)FUN_00404b30();
  if (((int)piStack_90 < 0) && (piStack_90 != (int *)0x80004002)) {
    iStack_94 = 0x6256f9;
    FUN_00878dfb();
  }
  piStack_90 = (int *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_94 = 0x625706;
  iVar3 = FUN_00402bc3();
  piVar5 = piStack_90;
  if (iVar3 < 0) {
    iStack_94 = 0x625711;
    piStack_90 = (int *)iVar3;
    FUN_00878dfb();
    piVar5 = (int *)extraout_ECX_00;
  }
  if (*(int *)(extraout_ECX + 0x18) == 0) {
    iVar3 = *(int *)(unaff_EBP + 8);
  }
  else {
    piStack_90 = (int *)0x0;
    puStack_9c = (undefined1 *)&iStack_94;
    *(int **)(unaff_EBP + 8) = &iStack_94;
    puStack_98 = (undefined1 *)0xc40;
    uStack_a0 = 0x62572c;
    iStack_94 = (int)piVar5;
    FUN_00679e4e();
    puStack_98 = (undefined1 *)(unaff_EBP + -0x4c);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    puStack_9c = (undefined1 *)0x62573b;
    FUN_0040263d();
    puStack_9c = (undefined1 *)0x625742;
    iStack_94 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    puStack_98 = (undefined1 *)0x62574c;
    iVar3 = FUN_00412550();
    puStack_98 = (undefined1 *)(unaff_EBP + -0x4c);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    puStack_9c = (undefined1 *)0x62575b;
    piStack_90 = (int *)FUN_00402bc3();
    if ((int)piStack_90 < 0) {
      iStack_94 = 0x625768;
      FUN_00878dfb();
    }
    piStack_90 = (int *)(unaff_EBP + -0x10);
    if (iVar3 == 0) {
      iStack_94 = 0x625777;
      iVar3 = FUN_00625a94();
    }
    else {
      iStack_94 = 0x62577e;
      iVar3 = FUN_00625cb7();
    }
  }
  if (iVar3 != 0) {
    if (*(int *)(extraout_ECX + 0x14) == 1) {
      piStack_90 = (int *)(unaff_EBP + -0x10);
      iStack_94 = 0x6257a5;
      iVar3 = FUN_00626153();
      if (iVar3 == 0x7fffffff) goto LAB_00625883;
      piStack_90 = (int *)0x0;
      iStack_94 = 0;
      puStack_98 = (undefined1 *)0x62;
      puStack_9c = (undefined1 *)0x6257bf;
      FUN_0060142b();
      piStack_90 = (int *)0x2;
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      iStack_94 = 0x6257cd;
      FUN_00457cda();
      piStack_90 = (int *)(uint)*(ushort *)(extraout_ECX + 0xc);
      iStack_94 = 0x6257dc;
      FUN_0045d247();
      piStack_90 = *(int **)(extraout_ECX + 0x10);
      iStack_94 = 0x6257e7;
      FUN_00457d37();
      piStack_90 = *(int **)(unaff_EBP + -0x3c);
      iStack_94 = 0x6257f2;
      FUN_0045d247();
      piStack_90 = *(int **)(unaff_EBP + -0x38);
      iStack_94 = 0x6257fd;
      FUN_0045d247();
      iStack_94 = 0x625806;
      piStack_90 = (int *)iVar3;
      FUN_00457d37();
      piStack_90 = (int *)(unaff_EBP + -0x34);
      iStack_94 = 0x625815;
      FUN_004751b2();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
    }
    else {
      piStack_90 = (int *)0x0;
      iStack_94 = 0;
      puStack_98 = (undefined1 *)0x62;
      puStack_9c = (undefined1 *)0x62582a;
      FUN_0060142b();
      piStack_90 = (int *)0x1;
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      iStack_94 = 0x625838;
      FUN_00457cda();
      piStack_90 = (int *)(uint)*(ushort *)(extraout_ECX + 0xc);
      iStack_94 = 0x625847;
      FUN_0045d247();
      piStack_90 = *(int **)(extraout_ECX + 0x10);
      iStack_94 = 0x625852;
      FUN_00457d37();
      piStack_90 = *(int **)(unaff_EBP + -0x3c);
      iStack_94 = 0x62585d;
      FUN_0045d247();
      piStack_90 = *(int **)(unaff_EBP + -0x38);
      iStack_94 = 0x625868;
      FUN_0045d247();
      piStack_90 = (int *)(unaff_EBP + -0x4c);
      iStack_94 = 0x625877;
      FUN_004751b2();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
    }
    piStack_90 = (int *)0x625883;
    FUN_0045ebca();
  }
LAB_00625883:
  piStack_90 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (piStack_90 != (int *)0x0) {
    iStack_94 = 0x625894;
    (**(code **)(*piStack_90 + 8))();
  }
  piStack_90 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piStack_90 != (int *)0x0) {
    iStack_94 = 0x6258a5;
    (**(code **)(*piStack_90 + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_90 = (int *)0x6258b1;
  FUN_0045f10c();
LAB_006258b1:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


