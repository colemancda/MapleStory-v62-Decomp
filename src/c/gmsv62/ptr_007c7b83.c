/* ptr_007c7b83 - 0x007c7b83 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_007c7b83(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  IBinding *pIVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  IBinding *unaff_EBX;
  int unaff_EBP;
  bool bVar10;
  int *piStack_58;
  undefined4 *puStack_54;
  int *piStack_8;
  
  piStack_8 = (int *)0x7c7b89;
  FUN_00878e09();
  piVar3 = *(int **)(unaff_EBP + -0x2c);
  if ((IBinding *)*piVar3 == unaff_EBX) {
    FUN_00878dfb();
  }
  piVar3 = (int *)*piVar3;
  iVar1 = (**(code **)(*piVar3 + 0xe0))();
  if (iVar1 < (int)unaff_EBX) {
    piStack_8 = piVar3;
    FUN_00878e09();
  }
  *(IBinding **)(unaff_EBP + -0x28) = unaff_EBX;
  *(undefined1 *)(unaff_EBP + -4) = 0x34;
  *(IBinding **)(unaff_EBP + 0xc) = unaff_EBX;
  while( true ) {
    if (*(IBinding **)(unaff_EBP + -0x48) == unaff_EBX) {
      piStack_8 = (int *)0x7c7bd6;
      FUN_00878dfb();
    }
    uVar2 = FUN_0040cf4d();
    if (uVar2 <= *(uint *)(unaff_EBP + 0xc)) break;
    FUN_0087a1b0();
    piStack_8 = *(int **)(unaff_EBP + 0xc);
    piStack_8 = (int *)FUN_00412335();
    *(undefined1 **)(unaff_EBP + -0x5c) = &stack0xfffffffc;
    FUN_00402e8e();
    piStack_8 = (int *)(unaff_EBP + -0xe0);
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    FUN_0040263d();
    FUN_004048a4();
    piStack_8 = (int *)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    FUN_00412348();
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    piStack_8 = (int *)0x7c7c45;
    iVar1 = FUN_0041a485();
    if ((iVar1 < (int)unaff_EBX) && (iVar1 != -0x7fffbffe)) {
      piStack_8 = (int *)0x7c7c56;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    FUN_004027b3();
    if (*(IBinding **)(unaff_EBP + -0x10) == unaff_EBX) {
      piStack_8 = (int *)0x7c7c6d;
      FUN_00878dfb();
    }
    if (*(IBinding **)(unaff_EBP + -0x28) == unaff_EBX) {
      piStack_8 = (int *)0x7c7c78;
      FUN_00878dfb();
    }
    piVar3 = *(int **)(unaff_EBP + -0x28);
    FUN_0040e48b();
    piStack_8 = piVar3;
    iVar1 = (**(code **)(*piVar3 + 0x44))();
    if (iVar1 < (int)unaff_EBX) {
      FUN_00878e09();
    }
    if (*(IBinding **)(unaff_EBP + -0x10) == unaff_EBX) {
      FUN_00878dfb();
    }
    if (*(IBinding **)(unaff_EBP + -0x28) == unaff_EBX) {
      FUN_00878dfb();
    }
    piVar3 = *(int **)(unaff_EBP + -0x28);
    FUN_0040e53d();
    iVar1 = (**(code **)(*piVar3 + 0x4c))();
    if (iVar1 < (int)unaff_EBX) {
      piStack_8 = piVar3;
      FUN_00878e09();
    }
    *(int ***)(unaff_EBP + -0x5c) = &piStack_8;
    FUN_00679e4e();
    *(undefined1 *)(unaff_EBP + -4) = 0x38;
    FUN_004115d9();
    FUN_00404e7f();
    *(undefined1 *)(unaff_EBP + -4) = 0x3a;
    FUN_0040263d();
    piStack_8 = (int *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x3b;
    piVar3 = (int *)FUN_00412550();
    *(undefined1 *)(unaff_EBP + -4) = 0x3a;
    iVar1 = FUN_00402bc3();
    if (iVar1 < (int)unaff_EBX) {
      piStack_8 = (int *)0x7c7d4b;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    FUN_004027eb();
    piStack_8 = (int *)0x7c7d63;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x3c;
    piStack_8 = (int *)0x7c7d73;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    piStack_8 = (int *)0x7c7d83;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    piStack_8 = (int *)0x7c7d93;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x3f;
    piStack_8 = piVar3;
    FUN_004031b7();
    pIVar5 = (IBinding *)**(int **)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0x40;
    if (pIVar5 == unaff_EBX) {
      piStack_8 = (int *)0x7c7db7;
      FUN_00878dfb();
    }
    piStack_8 = (int *)(unaff_EBP + -0xd0);
    FUN_004250ac();
    piStack_8 = (int *)0x7c7df4;
    iVar1 = FUN_00402bc3();
    if (iVar1 < (int)unaff_EBX) {
      piStack_8 = (int *)0x7c7dff;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3f;
    piStack_8 = (int *)0x7c7e0c;
    iVar1 = FUN_00402bc3();
    if (iVar1 < (int)unaff_EBX) {
      piStack_8 = (int *)0x7c7e17;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    piStack_8 = (int *)0x7c7e27;
    iVar1 = FUN_00402bc3();
    if (iVar1 < (int)unaff_EBX) {
      piStack_8 = (int *)0x7c7e32;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    piStack_8 = (int *)0x7c7e42;
    iVar1 = FUN_00402bc3();
    if (iVar1 < (int)unaff_EBX) {
      piStack_8 = (int *)0x7c7e4d;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3c;
    piStack_8 = (int *)0x7c7e5d;
    iVar1 = FUN_00402bc3();
    if (iVar1 < (int)unaff_EBX) {
      piStack_8 = (int *)0x7c7e68;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    piStack_8 = (int *)0x7c7e78;
    iVar1 = FUN_00402bc3();
    if (iVar1 < (int)unaff_EBX) {
      piStack_8 = (int *)0x7c7e83;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    piStack_8 = (int *)0x7c7e93;
    iVar1 = FUN_00402bc3();
    if (iVar1 < (int)unaff_EBX) {
      piStack_8 = (int *)0x7c7e9e;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
  }
  piStack_8 = (int *)0x7c7eb2;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x41;
  piStack_8 = (int *)0x7c7ec2;
  FUN_00403191();
  pIVar5 = (IBinding *)**(int **)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  if (pIVar5 == unaff_EBX) {
    piStack_8 = (int *)0x7c7ed3;
    FUN_00878dfb();
  }
  iVar1 = *(int *)**(undefined4 **)(unaff_EBP + -0x2c);
  piStack_8 = *(int **)(unaff_EBP + -0xe8);
  *(int **)(unaff_EBP + 0xc) = (int *)**(undefined4 **)(unaff_EBP + -0x2c);
  iVar1 = (**(code **)(iVar1 + 0x110))();
  if (iVar1 < (int)unaff_EBX) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x41;
  iVar1 = FUN_00402bc3();
  if (iVar1 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x34;
  iVar1 = FUN_00402bc3();
  if (iVar1 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(IBinding **)(unaff_EBP + -0x7c) = unaff_EBX;
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  FUN_00679d22();
  *(undefined1 *)(unaff_EBP + -4) = 0x44;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  if (*(IBinding **)(unaff_EBP + 0xc) != unaff_EBX) {
    FUN_00434e38();
  }
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x45;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x46;
  (*DAT_0097b4c8)();
  FUN_0087a1b0();
  puStack_54 = (undefined4 *)0xffffffff;
  piStack_58 = (int *)&stack0xffffffc0;
  uVar4 = FUN_00449713();
  piStack_58 = (int *)FUN_00456ad5(uVar4);
  *(undefined4 ***)(unaff_EBP + 8) = &puStack_54;
  FUN_004033a1();
  piStack_58 = (int *)(unaff_EBP + -0x1b4);
  *(undefined1 *)(unaff_EBP + -4) = 0x46;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x48;
  pIVar5 = (IBinding *)FUN_004032b4();
  *(IBinding **)(unaff_EBP + -0x20) = pIVar5;
  *(IBinding **)(unaff_EBP + -0x44) = unaff_EBX;
  if (pIVar5 != unaff_EBX) {
    iVar1 = FUN_00404b30();
    if ((iVar1 < (int)unaff_EBX) && (iVar1 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x4c;
  iVar1 = FUN_00402bc3();
  if (iVar1 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x4b;
  iVar1 = FUN_00402bc3();
  if (iVar1 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x4a;
  iVar1 = FUN_00402bc3();
  if (iVar1 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  if (*(IBinding **)(unaff_EBP + -0x44) == unaff_EBX) {
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
               (*(int *)(unaff_EBP + -0x3c) + 0x1ea0),unaff_EBX);
  }
  else {
    FUN_0087a1b0();
    puStack_54 = (undefined4 *)0x7c80bf;
    FUN_00412335();
    *(undefined1 **)(unaff_EBP + -0x5c) = &stack0xffffffb4;
    puStack_54 = (undefined4 *)0x7c80cb;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0x4a;
    puStack_54 = (undefined4 *)0x7c80de;
    FUN_0040263d();
    puStack_54 = (undefined4 *)0x7c80e5;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x4e;
    pIVar5 = (IBinding *)FUN_004032b4();
    *(IBinding **)(unaff_EBP + -0x14) = pIVar5;
    *(IBinding **)(unaff_EBP + 0xc) = unaff_EBX;
    if (pIVar5 != unaff_EBX) {
      iVar1 = FUN_0041a581();
      if ((iVar1 < (int)unaff_EBX) && (iVar1 != -0x7fffbffe)) {
        FUN_00878dfb();
      }
    }
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
               *(IBinding **)(unaff_EBP + 0xc));
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 0x4a;
    iVar1 = FUN_00402bc3();
    if (iVar1 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    if (*(IBinding **)(unaff_EBP + -0x10) == unaff_EBX) {
      FUN_00878dfb();
    }
    uVar4 = FUN_0040e48b();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
    *(IBinding **)(unaff_EBP + -0x14) = unaff_EBX;
    uVar4 = __ftol();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
    if (*(IBinding **)(unaff_EBP + -0x10) == unaff_EBX) {
      FUN_00878dfb();
    }
    uVar4 = FUN_0040e53d();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
    *(IBinding **)(unaff_EBP + -0x14) = unaff_EBX;
    uVar4 = __ftol();
    *(undefined4 *)(unaff_EBP + -0x30) = uVar4;
    if (*(IBinding **)(unaff_EBP + -0x10) == unaff_EBX) {
      FUN_00878dfb();
    }
    *(IBinding **)(unaff_EBP + -0x14) = *(IBinding **)(unaff_EBP + -0x10);
    if (*(IBinding **)(unaff_EBP + -0x10) == unaff_EBX) {
      FUN_00878dfb();
    }
    piVar3 = (int *)(*(int *)(unaff_EBP + -0x3c) + 4);
    piVar6 = (int *)(**(code **)(*piVar3 + 0x10))();
    *(double *)(unaff_EBP + -0x50) = (double)*piVar6;
    uVar2 = FUN_0040e48b();
    *(uint *)(unaff_EBP + -0x14) = uVar2 >> 1;
    iVar1 = FUN_0040eea9();
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) - iVar1;
    iVar1 = __ftol();
    if (*(IBinding **)(unaff_EBP + -0x10) == unaff_EBX) {
      FUN_00878dfb();
    }
    *(IBinding **)(unaff_EBP + -0x5c) = *(IBinding **)(unaff_EBP + -0x10);
    if (*(IBinding **)(unaff_EBP + -0x10) == unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x10);
    iVar7 = (**(code **)(*piVar3 + 0x10))();
    *(double *)(unaff_EBP + -0x50) = (double)*(int *)(iVar7 + 4);
    iVar7 = FUN_0040eed0();
    iVar8 = FUN_0040e53d();
    *(int *)(unaff_EBP + -0x14) = iVar8 - iVar7;
    iVar7 = __ftol();
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x4f;
    FUN_004031b7();
    bVar10 = DAT_0097c1ac == unaff_EBX;
    *(undefined1 *)(unaff_EBP + -4) = 0x50;
    if (bVar10) {
      FUN_00878dfb();
    }
    puStack_54 = *(undefined4 **)(unaff_EBP + 0xc);
    piStack_58 = (int *)(iVar7 - *(int *)(unaff_EBP + -0x30) / 2);
    puVar9 = (undefined4 *)FUN_0042a39f(unaff_EBP + -0x14,iVar1 - *(int *)(unaff_EBP + 0xc) / 2);
    iVar1 = *(int *)(unaff_EBP + -0x3c);
    this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar1 + 0x1ea0);
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar9);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 0x4f;
    iVar7 = FUN_00402bc3();
    if (iVar7 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x4a;
    iVar7 = FUN_00402bc3();
    if (iVar7 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    piVar3 = (int *)(iVar1 + 0x1e90);
    if ((IBinding *)*piVar3 == unaff_EBX) {
      FUN_00878dfb();
    }
    pIVar5 = *(IBinding **)this;
    *(int *)(unaff_EBP + 0xc) = *piVar3;
    if (pIVar5 == unaff_EBX) {
      FUN_00878dfb();
    }
    piVar3 = *(int **)this;
    FUN_004320e3();
    puVar9 = (undefined4 *)(**(code **)(*piVar3 + 0xb4))();
    if ((int)puVar9 < (int)unaff_EBX) {
      piStack_58 = (int *)0x7c836a;
      puStack_54 = puVar9;
      FUN_00878e09();
    }
    if (*(IBinding **)this == unaff_EBX) {
      FUN_00878dfb();
    }
    piVar3 = *(int **)this;
    puStack_54 = (undefined4 *)0x7c8385;
    iVar1 = (**(code **)(*piVar3 + 0xe0))();
    if (iVar1 < (int)unaff_EBX) {
      puStack_54 = (undefined4 *)&DAT_00963df8;
      piStack_58 = piVar3;
      FUN_00878e09(iVar1);
    }
    *(IBinding **)(unaff_EBP + 8) = unaff_EBX;
    *(undefined1 *)(unaff_EBP + -4) = 0x51;
    *(IBinding **)(unaff_EBP + 0xc) = unaff_EBX;
    while( true ) {
      if (*(IBinding **)(unaff_EBP + -0x44) == unaff_EBX) {
        puStack_54 = (undefined4 *)0x80004003;
        piStack_58 = (int *)0x7c83af;
        FUN_00878dfb();
      }
      puStack_54 = (undefined4 *)0x7c83b7;
      uVar2 = FUN_0040cf4d();
      if (uVar2 <= *(uint *)(unaff_EBP + 0xc)) break;
      puStack_54 = (undefined4 *)0x7c83c8;
      FUN_0087a1b0();
      piStack_58 = *(int **)(unaff_EBP + 0xc);
      puStack_54 = (undefined4 *)&stack0xffffffb0;
      piStack_58 = (int *)FUN_00412335();
      *(undefined4 ***)(unaff_EBP + -0x40) = &puStack_54;
      FUN_00402e8e();
      piStack_58 = (int *)(unaff_EBP + -0xb0);
      *(undefined1 *)(unaff_EBP + -4) = 0x51;
      FUN_0040263d();
      FUN_004048a4();
      puStack_54 = (undefined4 *)(unaff_EBP + -0xb0);
      piStack_58 = (int *)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x53;
      puStack_54 = (undefined4 *)FUN_00412348();
      *(undefined1 *)(unaff_EBP + -4) = 0x54;
      piStack_58 = (int *)0x7c841e;
      puStack_54 = (undefined4 *)FUN_0041a485();
      if (((int)puStack_54 < (int)unaff_EBX) && (puStack_54 != (undefined4 *)0x80004002)) {
        piStack_58 = (int *)0x7c842f;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x53;
      puStack_54 = (undefined4 *)0x7c843b;
      FUN_004027b3();
      if (*(IBinding **)(unaff_EBP + -0x10) == unaff_EBX) {
        puStack_54 = (undefined4 *)0x80004003;
        piStack_58 = (int *)0x7c8446;
        FUN_00878dfb();
      }
      if (*(IBinding **)(unaff_EBP + 8) == unaff_EBX) {
        puStack_54 = (undefined4 *)0x80004003;
        piStack_58 = (int *)0x7c8451;
        FUN_00878dfb();
      }
      piVar3 = *(int **)(unaff_EBP + 8);
      puStack_54 = (undefined4 *)0x7c845c;
      puStack_54 = (undefined4 *)FUN_0040e48b();
      piStack_58 = piVar3;
      iVar1 = (**(code **)(*piVar3 + 0x44))();
      if (iVar1 < (int)unaff_EBX) {
        FUN_00878e09(iVar1,piVar3,&DAT_00963cc8);
      }
      if (*(IBinding **)(unaff_EBP + -0x10) == unaff_EBX) {
        FUN_00878dfb(0x80004003);
      }
      if (*(IBinding **)(unaff_EBP + 8) == unaff_EBX) {
        FUN_00878dfb(0x80004003);
      }
      piVar3 = *(int **)(unaff_EBP + 8);
      uVar4 = FUN_0040e53d();
      iVar1 = (**(code **)(*piVar3 + 0x4c))(piVar3,uVar4);
      if (iVar1 < (int)unaff_EBX) {
        puStack_54 = (undefined4 *)&DAT_00963cc8;
        piStack_58 = piVar3;
        FUN_00878e09(iVar1);
      }
      puStack_54 = (undefined4 *)0x78;
      *(int ***)(unaff_EBP + -0x40) = &piStack_58;
      FUN_00679e4e(&piStack_58,0x474);
      iVar1 = unaff_EBP + -0x5c;
      *(undefined1 *)(unaff_EBP + -4) = 0x55;
      FUN_004115d9(iVar1);
      FUN_00404e7f(iVar1);
      iVar1 = unaff_EBP + -0x1d4;
      *(undefined1 *)(unaff_EBP + -4) = 0x57;
      FUN_0040263d(iVar1);
      piStack_58 = (int *)FUN_004048a4(iVar1);
      *(undefined1 *)(unaff_EBP + -4) = 0x58;
      uVar4 = FUN_00412550();
      *(undefined4 *)(unaff_EBP + -0x40) = uVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x57;
      puStack_54 = (undefined4 *)FUN_00402bc3(unaff_EBP + -0x1d4);
      if ((int)puStack_54 < (int)unaff_EBX) {
        piStack_58 = (int *)0x7c8525;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x53;
      puStack_54 = (undefined4 *)0x7c8531;
      FUN_004027eb();
      puStack_54 = &DAT_00980690;
      piStack_58 = (int *)0x7c8542;
      FUN_00403191();
      puStack_54 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x59;
      piStack_58 = (int *)0x7c854f;
      FUN_00403191();
      puStack_54 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x5a;
      piStack_58 = (int *)0x7c855f;
      FUN_00403191();
      puStack_54 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x5b;
      piStack_58 = (int *)0x7c856f;
      FUN_00403191();
      puStack_54 = (undefined4 *)0x3;
      piStack_58 = *(int **)(unaff_EBP + -0x40);
      *(undefined1 *)(unaff_EBP + -4) = 0x5c;
      FUN_004031b7();
      pIVar5 = *(IBinding **)this;
      *(undefined1 *)(unaff_EBP + -4) = 0x5d;
      if (pIVar5 == unaff_EBX) {
        puStack_54 = (undefined4 *)0x80004003;
        piStack_58 = (int *)0x7c8595;
        FUN_00878dfb();
      }
      puStack_54 = (undefined4 *)(unaff_EBP + -0x114);
      piStack_58 = (int *)(unaff_EBP + -0x58);
      FUN_004250ac(unaff_EBP + -500,*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0xd0,
                   unaff_EBP + -0xc0,unaff_EBP + -0x124);
      puStack_54 = (undefined4 *)(unaff_EBP + -500);
      piStack_58 = (int *)0x7c85d2;
      puStack_54 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_54 < (int)unaff_EBX) {
        piStack_58 = (int *)0x7c85dd;
        FUN_00878dfb();
      }
      puStack_54 = (undefined4 *)(unaff_EBP + -0xd0);
      *(undefined1 *)(unaff_EBP + -4) = 0x5c;
      piStack_58 = (int *)0x7c85ed;
      puStack_54 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_54 < (int)unaff_EBX) {
        piStack_58 = (int *)0x7c85f8;
        FUN_00878dfb();
      }
      puStack_54 = (undefined4 *)(unaff_EBP + -0xc0);
      *(undefined1 *)(unaff_EBP + -4) = 0x5b;
      piStack_58 = (int *)0x7c8608;
      puStack_54 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_54 < (int)unaff_EBX) {
        piStack_58 = (int *)0x7c8613;
        FUN_00878dfb();
      }
      puStack_54 = (undefined4 *)(unaff_EBP + -0x124);
      *(undefined1 *)(unaff_EBP + -4) = 0x5a;
      piStack_58 = (int *)0x7c8623;
      puStack_54 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_54 < (int)unaff_EBX) {
        piStack_58 = (int *)0x7c862e;
        FUN_00878dfb();
      }
      puStack_54 = (undefined4 *)(unaff_EBP + -0x58);
      *(undefined1 *)(unaff_EBP + -4) = 0x59;
      piStack_58 = (int *)0x7c863b;
      puStack_54 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_54 < (int)unaff_EBX) {
        piStack_58 = (int *)0x7c8646;
        FUN_00878dfb();
      }
      puStack_54 = (undefined4 *)(unaff_EBP + -0x114);
      *(undefined1 *)(unaff_EBP + -4) = 0x53;
      piStack_58 = (int *)0x7c8656;
      puStack_54 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_54 < (int)unaff_EBX) {
        piStack_58 = (int *)0x7c8661;
        FUN_00878dfb();
      }
      puStack_54 = (undefined4 *)(unaff_EBP + -0xb0);
      *(undefined1 *)(unaff_EBP + -4) = 0x51;
      piStack_58 = (int *)0x7c8671;
      puStack_54 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_54 < (int)unaff_EBX) {
        piStack_58 = (int *)0x7c867c;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
    }
    puStack_54 = &DAT_00980690;
    piStack_58 = (int *)0x7c8694;
    FUN_00403191();
    puStack_54 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x5e;
    piStack_58 = (int *)0x7c86a8;
    FUN_00403191();
    pIVar5 = *(IBinding **)this;
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    if (pIVar5 == unaff_EBX) {
      puStack_54 = (undefined4 *)0x80004003;
      piStack_58 = (int *)0x7c86b6;
      FUN_00878dfb();
    }
    piVar3 = *(int **)this;
    iVar1 = *piVar3;
    piStack_58 = *(int **)(unaff_EBP + -0x10c);
    puStack_54 = *(undefined4 **)(unaff_EBP + -0x108);
    *(int **)(unaff_EBP + 0xc) = piVar3;
    iVar1 = (**(code **)(iVar1 + 0x110))
                      (piVar3,0x20,*(undefined4 *)(unaff_EBP + -0xb0),
                       *(undefined4 *)(unaff_EBP + -0xac),*(undefined4 *)(unaff_EBP + -0xa8),
                       *(undefined4 *)(unaff_EBP + -0xa4),*(undefined4 *)(unaff_EBP + -0x114),
                       *(undefined4 *)(unaff_EBP + -0x110));
    if (iVar1 < (int)unaff_EBX) {
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5e;
    iVar1 = FUN_00402bc3();
    if (iVar1 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x51;
    iVar1 = FUN_00402bc3();
    if (iVar1 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x4a;
    FUN_004125e6();
  }
  uVar4 = FUN_007d1e08();
  *(undefined4 *)(*(int *)(unaff_EBP + -0x3c) + 0x1eb8) = uVar4;
  FUN_004027eb();
  *(undefined1 *)(unaff_EBP + -4) = 0x34;
  if (*(IBinding **)(unaff_EBP + -0x7c) != unaff_EBX) {
    FUN_00434e38();
  }
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  if (*(IBinding **)(unaff_EBP + -0x10) != unaff_EBX) {
    (**(code **)(*(int *)*(IBinding **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  if (*(IBinding **)(unaff_EBP + -0x48) != unaff_EBX) {
    (**(code **)(*(int *)*(IBinding **)(unaff_EBP + -0x48) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  if (*(IBinding **)(unaff_EBP + -0x84) != unaff_EBX) {
    (**(code **)(*(int *)*(IBinding **)(unaff_EBP + -0x84) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  if (*(IBinding **)(unaff_EBP + -0x78) != unaff_EBX) {
    FUN_00434e38();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (*(IBinding **)(unaff_EBP + -0x90) != unaff_EBX) {
    (**(code **)(*(int *)*(IBinding **)(unaff_EBP + -0x90) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  if (*(IBinding **)(unaff_EBP + -0x88) != unaff_EBX) {
    (**(code **)(*(int *)*(IBinding **)(unaff_EBP + -0x88) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (*(IBinding **)(unaff_EBP + -0x1c) != unaff_EBX) {
    (**(code **)(*(int *)*(IBinding **)(unaff_EBP + -0x1c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (*(IBinding **)(unaff_EBP + -0x6c) != unaff_EBX) {
    (**(code **)(*(int *)*(IBinding **)(unaff_EBP + -0x6c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (*(IBinding **)(unaff_EBP + -0x80) != unaff_EBX) {
    FUN_00434e38();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(IBinding **)(unaff_EBP + -0x8c) != unaff_EBX) {
    (**(code **)(*(int *)*(IBinding **)(unaff_EBP + -0x8c) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


