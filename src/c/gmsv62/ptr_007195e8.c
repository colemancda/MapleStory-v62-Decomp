/* ptr_007195e8 - 0x007195e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_007195e8(IBinding *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int extraout_ECX;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 uVar8;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_c;
  
  *(int **)(unaff_EBP + -0x6c) = &iStack_c;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x74) = 0;
  *(int *)(unaff_EBP + -0x94) = iVar2;
  if (iVar2 != 0) {
    param_1 = (IBinding *)(unaff_EBP + -0x94);
    param_1 = (IBinding *)FUN_0041a581();
    if (((int)param_1 < 0) && (param_1 != (IBinding *)0x80004002)) {
      FUN_00878dfb();
    }
  }
  param_1 = (IBinding *)(unaff_EBP + -0x1cc);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  param_1 = (IBinding *)FUN_00402bc3();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  param_1 = (IBinding *)(unaff_EBP + -0xcc);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  param_1 = (IBinding *)FUN_00402bc3();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x15c);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  param_1 = (IBinding *)FUN_00402bc3();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x90) = *(undefined4 *)(DAT_00978368 + 0x204c);
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0xb0;
  uVar3 = 0;
  while ((iVar2 = *(int *)(unaff_ESI + 0xe4), iVar2 != 0 && (uVar3 < *(uint *)(iVar2 + -4)))) {
    iVar2 = iVar2 + uVar3 * 8;
    param_1 = (IBinding *)0x1;
    *(int *)(unaff_EBP + -0x70) = iVar2;
    FUN_007d4a9a();
    iVar7 = *(int *)(iVar2 + 4);
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
    param_1 = (IBinding *)(iVar7 + 0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    FUN_00414f8b();
    iVar2 = *(int *)(iVar2 + 4);
    *(undefined4 *)(unaff_EBP + -100) = 0;
    param_1 = (IBinding *)(iVar2 + 0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    FUN_00414f8b();
    param_1 = (IBinding *)0x3c;
    *(BADSPACEBASE **)(unaff_EBP + -0x24) = register0x00000010;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_c = 0x719738;
    FUN_007d4a9a();
    FUN_007d3a22();
    param_1 = (IBinding *)0x3c;
    *(BADSPACEBASE **)(unaff_EBP + -0x24) = register0x00000010;
    iStack_c = 0x719756;
    FUN_007d4a9a();
    FUN_007d3a22();
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    FUN_00403191();
    param_1 = (IBinding *)(unaff_EBP + -0x50);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    FUN_00449749();
    iStack_c = FUN_00449713();
    *(undefined1 **)(unaff_EBP + -0x24) = &stack0xfffffff8;
    FUN_00448a17();
    iStack_c = *(int *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    FUN_004115d9();
    FUN_00448e3a();
    param_1 = (IBinding *)(unaff_EBP + -0x34);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    param_1 = (IBinding *)FUN_00402bc3();
    if ((int)param_1 < 0) {
      FUN_00878dfb();
    }
    param_1 = (IBinding *)(unaff_EBP + -0x50);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    param_1 = (IBinding *)FUN_00402bc3();
    if ((int)param_1 < 0) {
      FUN_00878dfb();
    }
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    FUN_00403191();
    param_1 = (IBinding *)(unaff_EBP + -0x19c);
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    FUN_00449749();
    iStack_c = FUN_00449713();
    *(undefined1 **)(unaff_EBP + -0x24) = &stack0xfffffff8;
    FUN_00448a17();
    iStack_c = *(int *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    FUN_004115d9();
    FUN_00448e3a();
    param_1 = (IBinding *)(unaff_EBP + -0xfc);
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    param_1 = (IBinding *)FUN_00402bc3();
    if ((int)param_1 < 0) {
      FUN_00878dfb();
    }
    param_1 = (IBinding *)(unaff_EBP + -0x19c);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    param_1 = (IBinding *)FUN_00402bc3();
    if ((int)param_1 < 0) {
      FUN_00878dfb();
    }
    FUN_00403191();
    param_1 = (IBinding *)(unaff_EBP + -0x11c);
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    uVar4 = FUN_00679d22();
    *(undefined4 *)(unaff_EBP + -0x78) = uVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    uVar4 = FUN_00483ba7();
    *(undefined4 *)(unaff_EBP + -0x40) = uVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    FUN_0071b931();
    FUN_00449713();
    iStack_c = 0x7198e2;
    FUN_00434e21();
    FUN_00449713();
    *(BADSPACEBASE **)(unaff_EBP + -0x24) = register0x00000010;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    FUN_0044974c();
    iVar2 = FUN_00448ebb();
    *(int *)(unaff_EBP + -0x24) = 0xb4 - iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    if (*(int *)(unaff_EBP + -0xb0) != 0) {
      param_1 = (IBinding *)(*(int *)(unaff_EBP + -0xb0) + -0xc);
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    if (*(int *)(unaff_EBP + -0x98) != 0) {
      param_1 = (IBinding *)(*(int *)(unaff_EBP + -0x98) + -0xc);
      FUN_00434e38();
    }
    param_1 = (IBinding *)(unaff_EBP + -0x11c);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    param_1 = (IBinding *)FUN_00402bc3();
    if ((int)param_1 < 0) {
      FUN_00878dfb();
    }
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    FUN_00403191();
    param_1 = (IBinding *)(unaff_EBP + -0x13c);
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    FUN_00449749();
    iStack_c = unaff_EBP + -0xa4;
    uVar4 = FUN_00679d22();
    *(undefined4 *)(unaff_EBP + -0x40) = uVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    uVar4 = FUN_00483ba7();
    *(undefined4 *)(unaff_EBP + -0x78) = uVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    FUN_0071b931();
    iStack_c = 0x7199d5;
    iStack_c = FUN_00449713();
    FUN_00434e21();
    iStack_c = FUN_00449713();
    *(undefined1 **)(unaff_EBP + -0x40) = &stack0xfffffff8;
    FUN_00448a17();
    iStack_c = *(int *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    FUN_004115d9();
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    if (*(int *)(unaff_EBP + -0x9c) != 0) {
      param_1 = (IBinding *)(*(int *)(unaff_EBP + -0x9c) + -0xc);
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    if (*(int *)(unaff_EBP + -0xa4) != 0) {
      param_1 = (IBinding *)(*(int *)(unaff_EBP + -0xa4) + -0xc);
      FUN_00434e38();
    }
    param_1 = (IBinding *)(unaff_EBP + -0x17c);
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    param_1 = (IBinding *)FUN_00402bc3();
    if ((int)param_1 < 0) {
      FUN_00878dfb();
    }
    param_1 = (IBinding *)(unaff_EBP + -0x13c);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    param_1 = (IBinding *)FUN_00402bc3();
    if ((int)param_1 < 0) {
      FUN_00878dfb();
    }
    FUN_00403191();
    param_1 = (IBinding *)(unaff_EBP + -0x1bc);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    uVar4 = FUN_00679d22();
    *(undefined4 *)(unaff_EBP + -0x24) = uVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    uVar4 = FUN_00483ba7();
    *(undefined4 *)(unaff_EBP + -0x40) = uVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    FUN_0071b931();
    FUN_00449713();
    iStack_c = 0x719ad0;
    FUN_00434e21();
    FUN_00449713();
    *(BADSPACEBASE **)(unaff_EBP + -0x24) = register0x00000010;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    FUN_0044974c();
    iVar2 = FUN_00448ebb();
    *(int *)(unaff_EBP + -0x40) = 0x11f - iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    if (*(int *)(unaff_EBP + -0xac) != 0) {
      param_1 = (IBinding *)(*(int *)(unaff_EBP + -0xac) + -0xc);
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    if (*(int *)(unaff_EBP + -0xb4) != 0) {
      param_1 = (IBinding *)(*(int *)(unaff_EBP + -0xb4) + -0xc);
      FUN_00434e38();
    }
    param_1 = (IBinding *)(unaff_EBP + -0x1bc);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    param_1 = (IBinding *)FUN_00402bc3();
    if ((int)param_1 < 0) {
      FUN_00878dfb();
    }
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    FUN_00403191();
    param_1 = (IBinding *)(unaff_EBP + -0xec);
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    FUN_00449749();
    iStack_c = unaff_EBP + -0x88;
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    uVar4 = FUN_00483ba7();
    *(undefined4 *)(unaff_EBP + -0x24) = uVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    FUN_0071b931();
    iStack_c = 0x719bc0;
    iStack_c = FUN_00449713();
    FUN_00434e21();
    iStack_c = FUN_00449713();
    *(undefined1 **)(unaff_EBP + -0x24) = &stack0xfffffff8;
    FUN_00448a17();
    iStack_c = *(int *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    FUN_004115d9();
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    if (*(int *)(unaff_EBP + -0xbc) != 0) {
      param_1 = (IBinding *)(*(int *)(unaff_EBP + -0xbc) + -0xc);
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    if (*(int *)(unaff_EBP + -0x88) != 0) {
      param_1 = (IBinding *)(*(int *)(unaff_EBP + -0x88) + -0xc);
      FUN_00434e38();
    }
    param_1 = (IBinding *)(unaff_EBP + -0xdc);
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    param_1 = (IBinding *)FUN_00402bc3();
    if ((int)param_1 < 0) {
      FUN_00878dfb();
    }
    param_1 = (IBinding *)(unaff_EBP + -0xec);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    param_1 = (IBinding *)FUN_00402bc3();
    if ((int)param_1 < 0) {
      FUN_00878dfb();
    }
    FUN_00403191();
    piVar5 = *(int **)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    if (piVar5 == (int *)0x0) {
      param_1 = (IBinding *)0x80004003;
      FUN_00878dfb();
      piVar5 = *(int **)(unaff_EBP + -0x1c);
    }
    iVar2 = *piVar5;
    iStack_c = *(int *)(unaff_EBP + -0x74);
    *(int **)(unaff_EBP + -0x24) = piVar5;
    param_1 = *(IBinding **)(unaff_EBP + -0x100);
    iVar2 = (**(code **)(iVar2 + 0x80))();
    if (iVar2 < 0) {
      iStack_20 = *(undefined4 *)(unaff_EBP + -0x24);
      iStack_28 = 0x719cba;
      iStack_24 = iVar2;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_20 = 0x719cca;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_20 = 0x719cd5;
      FUN_00878dfb();
    }
    iVar2 = *(int *)(unaff_EBP + -0x70);
    if ((int)*(char *)(*(int *)(iVar2 + 4) + 0x20) != *(int *)(unaff_EBP + -0x90)) {
      iStack_20 = 0x719cf7;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      iStack_20 = 0x719d07;
      FUN_00403191();
      cVar1 = *(char *)(*(int *)(iVar2 + 4) + 0x20);
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      if (cVar1 < '\0') {
        iStack_20 = unaff_EBP + -0xb8;
        iStack_24 = 0x719d2a;
        puVar6 = (undefined4 *)FUN_00679d22();
        *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
        *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      }
      else {
        iStack_20 = unaff_EBP + -0x80;
        iStack_24 = 0x719d47;
        puVar6 = (undefined4 *)FUN_00679d22();
        *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 2;
        *(undefined4 *)(unaff_EBP + -4) = 0x2e;
      }
      uVar4 = *puVar6;
      iStack_20 = unaff_EBP + -300;
      iStack_28 = unaff_EBP + -0xa8;
      iStack_24 = 6;
      FUN_007d4a9a();
      *(undefined4 *)(unaff_EBP + -4) = 0x2f;
      iStack_24 = 0x719d80;
      iStack_24 = FUN_00449749();
      *(int **)(unaff_EBP + -0x70) = &iStack_28;
      iStack_28 = extraout_ECX;
      FUN_00448a17(uVar4);
      uVar4 = *(undefined4 *)(unaff_EBP + -0x3c);
      uVar8 = 0x175;
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      FUN_004115d9(0x175,uVar4);
      FUN_00448e3a(uVar8,uVar4);
      FUN_004497b5();
      *(undefined4 *)(unaff_EBP + -4) = 0x2d;
      if ((*(byte *)(unaff_EBP + -0x14) & 2) != 0) {
        *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffd;
        FUN_00414ebb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0x2c;
      if ((*(byte *)(unaff_EBP + -0x14) & 1) != 0) {
        *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
        FUN_00414ebb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      iStack_20 = 0x719df8;
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        iStack_20 = 0x719e03;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iStack_20 = 0x719e13;
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        iStack_20 = 0x719e1e;
        FUN_00878dfb();
      }
    }
    iStack_20 = unaff_EBP + -0xa0;
    iStack_24 = 0x719e37;
    puVar6 = (undefined4 *)FUN_00679d22();
    iStack_20 = *puVar6;
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    iStack_24 = unaff_EBP + -0x58;
    iStack_28 = 0x719e4e;
    FUN_00434e21();
    *(undefined4 *)(unaff_EBP + -0x5c) = 0;
    iStack_20 = 0x719e5e;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    FUN_00414ebb();
    iStack_20 = *(undefined4 *)(*(int *)(iVar2 + 4) + 8);
    iStack_24 = unaff_EBP + -0x5c;
    iStack_28 = 0x719e8a;
    FUN_007d3546();
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    iVar2 = *(int *)(iVar2 + 4);
    iVar7 = *(int *)(iVar2 + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    if (iVar7 < 100000) {
      iStack_20 = unaff_EBP + -0x84;
      iStack_24 = 0x719eaf;
      puVar6 = (undefined4 *)FUN_007d4a9a();
      param_1 = (IBinding *)*puVar6;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x38),param_1);
      param_1 = *(IBinding **)(unaff_EBP + -0x84);
    }
    else if (*(int *)(iVar2 + 8) < 1000000) {
      iStack_20 = unaff_EBP + -0x8c;
      iStack_24 = 0x719edd;
      puVar6 = (undefined4 *)FUN_007d4a9a();
      param_1 = (IBinding *)*puVar6;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x38),param_1);
      param_1 = *(IBinding **)(unaff_EBP + -0x8c);
    }
    else if (*(int *)(iVar2 + 8) < 10000000) {
      iStack_20 = unaff_EBP + -0x7c;
      iStack_24 = 0x719f08;
      puVar6 = (undefined4 *)FUN_007d4a9a();
      param_1 = (IBinding *)*puVar6;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x38),param_1);
      param_1 = *(IBinding **)(unaff_EBP + -0x7c);
    }
    else if (*(int *)(iVar2 + 8) < 100000000) {
      iStack_20 = unaff_EBP + -0x20;
      iStack_24 = 0x719f2d;
      puVar6 = (undefined4 *)FUN_007d4a9a();
      param_1 = (IBinding *)*puVar6;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x38),param_1);
      param_1 = *(IBinding **)(unaff_EBP + -0x20);
    }
    else if (*(int *)(iVar2 + 8) < 1000000000) {
      iStack_20 = unaff_EBP + -0x10;
      iStack_24 = 0x719f52;
      puVar6 = (undefined4 *)FUN_007d4a9a();
      param_1 = (IBinding *)*puVar6;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x38),param_1);
      param_1 = *(IBinding **)(unaff_EBP + -0x10);
    }
    else {
      iStack_20 = unaff_EBP + -0x6c;
      iStack_24 = 0x719f6e;
      puVar6 = (undefined4 *)FUN_007d4a9a();
      param_1 = (IBinding *)*puVar6;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x38),param_1);
      param_1 = *(IBinding **)(unaff_EBP + -0x6c);
    }
    if (param_1 != (IBinding *)0x0) {
      (**(code **)(*(int *)param_1 + 8))();
    }
    FUN_00403191();
    param_1 = (IBinding *)(unaff_EBP + -0x16c);
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    FUN_00449713();
    *(BADSPACEBASE **)(unaff_EBP + -0x70) = register0x00000010;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    FUN_0044974c();
    FUN_00448ebb();
    param_1 = (IBinding *)(unaff_EBP + -0x16c);
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    param_1 = (IBinding *)FUN_00402bc3();
    if ((int)param_1 < 0) {
      FUN_00878dfb();
    }
    FUN_00403191();
    param_1 = (IBinding *)0x3;
    *(undefined1 *)(unaff_EBP + -4) = 0x39;
    FUN_004031b7();
    param_1 = (IBinding *)(unaff_EBP + -0x1ac);
    *(undefined1 *)(unaff_EBP + -4) = 0x3a;
    FUN_00449749();
    iStack_c = FUN_00449713();
    *(undefined1 **)(unaff_EBP + -0x70) = &stack0xfffffff8;
    FUN_00448a17();
    iStack_c = *(int *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0x3a;
    FUN_004115d9();
    FUN_00448e3a();
    param_1 = (IBinding *)(unaff_EBP + -0x18c);
    *(undefined1 *)(unaff_EBP + -4) = 0x39;
    param_1 = (IBinding *)FUN_00402bc3();
    if ((int)param_1 < 0) {
      FUN_00878dfb();
    }
    param_1 = (IBinding *)(unaff_EBP + -0x1ac);
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    param_1 = (IBinding *)FUN_00402bc3();
    if ((int)param_1 < 0) {
      FUN_00878dfb();
    }
    param_1 = *(IBinding **)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    if (param_1 != (IBinding *)0x0) {
      (**(code **)(*(int *)param_1 + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    param_1 = (IBinding *)0x71a0a0;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    param_1 = (IBinding *)0x71a0ac;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    param_1 = (IBinding *)0x71a0b8;
    FUN_00414ebb();
    param_1 = *(IBinding **)(unaff_EBP + -0x54);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (param_1 != (IBinding *)0x0) {
      (**(code **)(*(int *)param_1 + 8))();
    }
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
    *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -0x3c) + 0x16;
    unaff_ESI = *(int *)(unaff_EBP + -0x68);
    uVar3 = *(uint *)(unaff_EBP + -0x18);
  }
  param_1 = (IBinding *)0xde5;
  puVar6 = (undefined4 *)FUN_00679d22();
  param_1 = (IBinding *)*puVar6;
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  param_1 = (IBinding *)FUN_00434e21();
  *(undefined4 *)(unaff_EBP + 8) = 0;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 0x40;
  param_1 = (IBinding *)0x71a11f;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  param_1 = (IBinding *)0x71a12b;
  FUN_00414ebb();
  param_1 = (IBinding *)(unaff_EBP + -0x34);
  VariantInit((VARIANTARG *)param_1);
  param_1 = (IBinding *)FUN_00402e32();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0x41;
  VariantInit((VARIANTARG *)param_1);
  param_1 = (IBinding *)FUN_00402e32();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  iStack_c = 0x71a184;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  FUN_00449749();
  iStack_c = FUN_00449713();
  *(undefined1 **)(unaff_EBP + -0x20) = &stack0xfffffff8;
  FUN_00448a17();
  iStack_c = 0x55;
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  FUN_004115d9();
  FUN_00448e3a();
  param_1 = *(IBinding **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  if (param_1 != (IBinding *)0x0) {
    (**(code **)(*(int *)param_1 + 8))();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0x41;
  param_1 = (IBinding *)FUN_00402bc3();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  param_1 = (IBinding *)FUN_00402bc3();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x34);
  VariantInit((VARIANTARG *)param_1);
  param_1 = (IBinding *)FUN_00402e32();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0x45;
  FUN_00449713();
  *(BADSPACEBASE **)(unaff_EBP + -0x20) = register0x00000010;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 0x46;
  iStack_c = 0x71a245;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x48;
  FUN_0044974c();
  uVar4 = FUN_00448ebb();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
  param_1 = *(IBinding **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x45;
  if (param_1 != (IBinding *)0x0) {
    (**(code **)(*(int *)param_1 + 8))();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  param_1 = (IBinding *)FUN_00402bc3();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  param_1 = *(IBinding **)(*(int *)(unaff_EBP + -0x68) + 0x5d8);
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 3;
  uVar4 = FUN_0045a1d8();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
  param_1 = (IBinding *)0x3be;
  *(undefined1 *)(unaff_EBP + -4) = 0x49;
  FUN_00679d22();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  param_1 = (IBinding *)**(undefined4 **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x4b;
  param_1 = (IBinding *)FUN_00434e21();
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 0x4a;
  param_1 = (IBinding *)0x71a2e9;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x49;
  param_1 = (IBinding *)0x71a2f5;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  param_1 = (IBinding *)0x71a301;
  FUN_00414ebb();
  param_1 = (IBinding *)(unaff_EBP + -0x50);
  VariantInit((VARIANTARG *)param_1);
  param_1 = (IBinding *)FUN_00402e32();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0x4c;
  VariantInit((VARIANTARG *)param_1);
  param_1 = (IBinding *)FUN_00402e32();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0x4d;
  FUN_00449749();
  iStack_c = FUN_00449713();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff8;
  FUN_00448a17();
  iStack_c = 0x55;
  *(undefined1 *)(unaff_EBP + -4) = 0x4d;
  FUN_004115d9();
  FUN_00448e3a();
  param_1 = (IBinding *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0x4c;
  param_1 = (IBinding *)FUN_00402bc3();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  param_1 = (IBinding *)FUN_00402bc3();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x34);
  VariantInit((VARIANTARG *)param_1);
  param_1 = (IBinding *)FUN_00402e32();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0x4f;
  FUN_00449713();
  *(BADSPACEBASE **)(unaff_EBP + -0x10) = register0x00000010;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 0x4f;
  FUN_0044974c();
  iVar2 = FUN_00448ebb();
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + iVar2;
  param_1 = (IBinding *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  param_1 = (IBinding *)FUN_00402bc3();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 3;
  param_1 = (IBinding *)0xde6;
  puVar6 = (undefined4 *)FUN_00679d22();
  param_1 = (IBinding *)*puVar6;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x52;
  param_1 = (IBinding *)FUN_00434e21();
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 0x51;
  param_1 = (IBinding *)0x71a463;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  param_1 = (IBinding *)0x71a46f;
  FUN_00414ebb();
  param_1 = (IBinding *)(unaff_EBP + -0x50);
  VariantInit((VARIANTARG *)param_1);
  param_1 = (IBinding *)FUN_00402e32();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0x53;
  VariantInit((VARIANTARG *)param_1);
  param_1 = (IBinding *)FUN_00402e32();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0x54;
  iStack_c = 0x71a4c2;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x55;
  FUN_00449749();
  iStack_c = FUN_00449713();
  *(undefined1 **)(unaff_EBP + -0x20) = &stack0xfffffff8;
  FUN_00448a17();
  iStack_c = 0x55;
  *(undefined1 *)(unaff_EBP + -4) = 0x55;
  FUN_004115d9();
  FUN_00448e3a();
  param_1 = *(IBinding **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x54;
  if (param_1 != (IBinding *)0x0) {
    (**(code **)(*(int *)param_1 + 8))();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0x53;
  param_1 = (IBinding *)FUN_00402bc3();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  param_1 = (IBinding *)FUN_00402bc3();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  param_1 = (IBinding *)0xde7;
  puVar6 = (undefined4 *)FUN_00679d22();
  param_1 = (IBinding *)*puVar6;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x58;
  param_1 = (IBinding *)FUN_00434e21();
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 0x57;
  param_1 = (IBinding *)0x71a57c;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  param_1 = (IBinding *)0x71a588;
  FUN_00414ebb();
  param_1 = (IBinding *)(unaff_EBP + -0x50);
  VariantInit((VARIANTARG *)param_1);
  param_1 = (IBinding *)FUN_00402e32();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0x59;
  VariantInit((VARIANTARG *)param_1);
  param_1 = (IBinding *)FUN_00402e32();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0x5a;
  iStack_c = 0x71a5db;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x5b;
  FUN_00449749();
  iStack_c = FUN_00449713();
  *(undefined1 **)(unaff_EBP + -0x20) = &stack0xfffffff8;
  FUN_00448a17();
  iStack_c = 99;
  *(undefined1 *)(unaff_EBP + -4) = 0x5b;
  FUN_004115d9();
  FUN_00448e3a();
  param_1 = *(IBinding **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x5a;
  if (param_1 != (IBinding *)0x0) {
    (**(code **)(*(int *)param_1 + 8))();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0x59;
  param_1 = (IBinding *)FUN_00402bc3();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  param_1 = (IBinding *)FUN_00402bc3();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x34);
  VariantInit((VARIANTARG *)param_1);
  param_1 = (IBinding *)FUN_00402e32();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0x5d;
  FUN_00449713();
  *(BADSPACEBASE **)(unaff_EBP + -0x20) = register0x00000010;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 0x5e;
  iStack_c = 0x71a69c;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x60;
  FUN_0044974c();
  uVar4 = FUN_00448ebb();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
  param_1 = *(IBinding **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x5d;
  if (param_1 != (IBinding *)0x0) {
    (**(code **)(*(int *)param_1 + 8))();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  param_1 = (IBinding *)FUN_00402bc3();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(*(int *)(unaff_EBP + -0x68) + 0xd8);
  param_1 = (IBinding *)0x3bc;
  FUN_00679d22();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  param_1 = *(IBinding **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x62;
  param_1 = (IBinding *)FUN_00434e21();
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 0x61;
  param_1 = (IBinding *)0x71a727;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  param_1 = (IBinding *)0x71a733;
  FUN_00414ebb();
  param_1 = (IBinding *)(unaff_EBP + -0x50);
  VariantInit((VARIANTARG *)param_1);
  param_1 = (IBinding *)FUN_00402e32();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 99;
  VariantInit((VARIANTARG *)param_1);
  param_1 = (IBinding *)FUN_00402e32();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 100;
  iStack_c = 0x71a786;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x65;
  FUN_00449749();
  iStack_c = FUN_00449713();
  *(undefined1 **)(unaff_EBP + -0x20) = &stack0xfffffff8;
  FUN_00448a17();
  iStack_c = 99;
  *(undefined1 *)(unaff_EBP + -4) = 0x65;
  FUN_004115d9();
  FUN_00448e3a();
  param_1 = *(IBinding **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 100;
  if (param_1 != (IBinding *)0x0) {
    (**(code **)(*(int *)param_1 + 8))();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 99;
  param_1 = (IBinding *)FUN_00402bc3();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  param_1 = (IBinding *)FUN_00402bc3();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x34);
  VariantInit((VARIANTARG *)param_1);
  param_1 = (IBinding *)FUN_00402e32();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0x67;
  FUN_00449713();
  *(BADSPACEBASE **)(unaff_EBP + -0x20) = register0x00000010;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 0x68;
  iStack_c = 0x71a84c;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x6a;
  FUN_0044974c();
  iVar2 = FUN_00448ebb();
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + iVar2;
  param_1 = *(IBinding **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x67;
  if (param_1 != (IBinding *)0x0) {
    (**(code **)(*(int *)param_1 + 8))();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  param_1 = (IBinding *)FUN_00402bc3();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  param_1 = (IBinding *)0xde8;
  puVar6 = (undefined4 *)FUN_00679d22();
  param_1 = (IBinding *)*puVar6;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x6c;
  param_1 = (IBinding *)FUN_00434e21();
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 0x6b;
  param_1 = (IBinding *)0x71a8c7;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  param_1 = (IBinding *)0x71a8d3;
  FUN_00414ebb();
  param_1 = (IBinding *)(unaff_EBP + -0x50);
  VariantInit((VARIANTARG *)param_1);
  param_1 = (IBinding *)FUN_00402e32();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0x6d;
  VariantInit((VARIANTARG *)param_1);
  param_1 = (IBinding *)FUN_00402e32();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0x6e;
  iStack_c = 0x71a926;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x6f;
  FUN_00449749();
  iStack_c = FUN_00449713();
  *(undefined1 **)(unaff_EBP + -0x20) = &stack0xfffffff8;
  FUN_00448a17();
  iStack_c = 99;
  *(undefined1 *)(unaff_EBP + -4) = 0x6f;
  FUN_004115d9();
  FUN_00448e3a();
  param_1 = *(IBinding **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x6e;
  if (param_1 != (IBinding *)0x0) {
    (**(code **)(*(int *)param_1 + 8))();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0x6d;
  param_1 = (IBinding *)FUN_00402bc3();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  param_1 = (IBinding *)FUN_00402bc3();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x34);
  VariantInit((VARIANTARG *)param_1);
  param_1 = (IBinding *)FUN_00402e32();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0x71;
  FUN_00449713();
  *(BADSPACEBASE **)(unaff_EBP + -0x20) = register0x00000010;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  iStack_c = 0x71a9ec;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x74;
  FUN_0044974c();
  FUN_00448ebb();
  param_1 = *(IBinding **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x71;
  if (param_1 != (IBinding *)0x0) {
    (**(code **)(*(int *)param_1 + 8))();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  param_1 = (IBinding *)FUN_00402bc3();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  param_1 = (IBinding *)0xde9;
  puVar6 = (undefined4 *)FUN_00679d22();
  param_1 = (IBinding *)*puVar6;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x76;
  param_1 = (IBinding *)FUN_00434e21();
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 0x75;
  param_1 = (IBinding *)0x71aa64;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  param_1 = (IBinding *)0x71aa70;
  FUN_00414ebb();
  param_1 = (IBinding *)(unaff_EBP + -0x50);
  VariantInit((VARIANTARG *)param_1);
  param_1 = (IBinding *)FUN_00402e32();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0x77;
  VariantInit((VARIANTARG *)param_1);
  param_1 = (IBinding *)FUN_00402e32();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0x78;
  iStack_c = 0x71aac3;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x79;
  FUN_00449749();
  iStack_c = FUN_00449713();
  *(undefined1 **)(unaff_EBP + -0x20) = &stack0xfffffff8;
  FUN_00448a17();
  iStack_c = 0x71;
  *(undefined1 *)(unaff_EBP + -4) = 0x79;
  FUN_004115d9();
  FUN_00448e3a();
  param_1 = *(IBinding **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x78;
  if (param_1 != (IBinding *)0x0) {
    (**(code **)(*(int *)param_1 + 8))();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0x77;
  param_1 = (IBinding *)FUN_00402bc3();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  param_1 = (IBinding *)FUN_00402bc3();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  param_1 = (IBinding *)0x71ab49;
  FUN_00414ebb();
  param_1 = *(IBinding **)(unaff_EBP + -0x74);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (param_1 != (IBinding *)0x0) {
    (**(code **)(*(int *)param_1 + 8))();
  }
  param_1 = *(IBinding **)(unaff_EBP + -0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (param_1 != (IBinding *)0x0) {
    (**(code **)(*(int *)param_1 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


