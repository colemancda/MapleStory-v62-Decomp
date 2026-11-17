/* ptr_0040c383 - 0x0040c383 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0040c383(short *param_1,int *param_2,IBinding *param_3)

{
  char cVar1;
  short *psVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  short *unaff_EBX;
  int unaff_EBP;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
code_r0x0040c383:
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  param_1 = (short *)0x40c393;
  psVar2 = (short *)FUN_004032b4();
  *(short **)(unaff_EBP + -0x90) = psVar2;
  *(short **)(unaff_EBP + 0xc) = unaff_EBX;
  if (psVar2 != unaff_EBX) {
    param_3 = (IBinding *)(unaff_EBP + -0x90);
    param_2 = (int *)0x40c3af;
    param_3 = (IBinding *)FUN_0041a4e5();
    if (((int)param_3 < (int)unaff_EBX) && (param_3 != (IBinding *)0x80004002)) {
      param_2 = (int *)0x40c3c0;
      FUN_00878dfb();
    }
  }
  param_3 = (IBinding *)(unaff_EBP + -0xc0);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  param_2 = (int *)0x40c3d0;
  param_3 = (IBinding *)FUN_00402bc3();
  if ((int)param_3 < (int)unaff_EBX) {
    param_2 = (int *)0x40c3db;
    FUN_00878dfb();
  }
  param_3 = (IBinding *)0x44;
  param_2 = (int *)0x40c3e7;
  psVar2 = (short *)FUN_004029b9();
  *(short **)(unaff_EBP + -0x28) = psVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  if (psVar2 == unaff_EBX) {
    iVar3 = 0;
  }
  else {
    param_3 = (IBinding *)0x40c3f9;
    iVar3 = FUN_0040cfa7();
  }
  param_3 = *(IBinding **)(unaff_EBP + -0x24);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  param_2 = (int *)0x40c40e;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar3 + 0xc),param_3);
  param_3 = (IBinding *)0xb4;
  *(undefined1 **)(unaff_EBP + -0x28) = &stack0x00000008;
  param_1 = (short *)0x474;
  FUN_00679e4e();
  param_1 = (short *)(unaff_EBP + -0x94);
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  FUN_004115d9();
  FUN_00404e7f();
  param_1 = (short *)(unaff_EBP + -0xb0);
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  FUN_0040263d();
  param_2 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  param_1 = (short *)0x40c463;
  uVar4 = FUN_00412550();
  *(undefined4 *)(iVar3 + 0x40) = uVar4;
  param_1 = (short *)(unaff_EBP + -0xb0);
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  param_3 = (IBinding *)FUN_00402bc3();
  if ((int)param_3 < (int)unaff_EBX) {
    param_2 = (int *)0x40c483;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  param_3 = (IBinding *)0x40c492;
  FUN_004027eb();
  param_2 = (int *)0x40c49b;
  cVar1 = FUN_004115ad();
  if (cVar1 == '\0') {
    param_2 = (int *)0x40c4ac;
    cVar1 = FUN_004115ad();
    if (cVar1 != '\0') goto LAB_0040c525;
    if (*(short **)(unaff_EBP + 0xc) == unaff_EBX) {
      param_3 = (IBinding *)0x80004003;
      param_2 = (int *)0x40c4c0;
      FUN_00878dfb();
      if (*(short **)(unaff_EBP + 0xc) == unaff_EBX) {
        param_3 = (IBinding *)0x80004003;
        param_2 = (int *)0x40c4cb;
        FUN_00878dfb();
      }
    }
    *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + 0xc);
    if (*(short **)(unaff_EBP + -0x18) == unaff_EBX) {
      param_3 = (IBinding *)0x80004003;
      param_2 = (int *)0x40c4dc;
      FUN_00878dfb();
    }
    *(short **)(unaff_EBP + -0x28) = *(short **)(unaff_EBP + -0x18);
    if (*(short **)(unaff_EBP + -0x18) == unaff_EBX) {
      param_3 = (IBinding *)0x80004003;
      param_2 = (int *)0x40c4ec;
      FUN_00878dfb();
    }
    param_3 = (IBinding *)0x40c4f7;
    param_3 = (IBinding *)FUN_00404abb();
    param_2 = (int *)0x40c500;
    param_2 = (int *)FUN_00404a94();
    param_1 = (short *)0x40c509;
    param_1 = (short *)FUN_00404abb();
    FUN_00404a94();
    FUN_004114f3(iVar3 + 0x10);
  }
  else {
LAB_0040c525:
    param_1 = unaff_EBX;
    param_2 = (int *)unaff_EBX;
    FUN_004114f3(iVar3 + 0x10);
  }
  *(int *)(unaff_EBP + -0x50) = iVar3;
  param_3 = (IBinding *)0x40c540;
  FUN_00412e1c();
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  param_3 = (IBinding *)0x40c54f;
  FUN_0041394f();
  param_3 = (IBinding *)(unaff_EBP + -0x54);
  param_2 = (int *)0x40c55a;
  FUN_00412de3();
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  param_3 = (IBinding *)0x40c566;
  FUN_00412e2e();
  param_3 = (IBinding *)0x40c56e;
  FUN_004125d9();
  param_3 = (IBinding *)0x40c576;
  FUN_004125d9();
  param_3 = (IBinding *)0x40c57e;
  FUN_004027eb();
  while( true ) {
    param_3 = (IBinding *)0x40c586;
    FUN_004125e6();
    param_3 = (IBinding *)(unaff_EBP + -0x88);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    param_2 = (int *)0x40c596;
    param_3 = (IBinding *)FUN_00402bc3();
    if ((int)param_3 < (int)unaff_EBX) {
      param_2 = (int *)0x40c5a1;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    param_3 = (IBinding *)0x40c5ad;
    FUN_00402fa6();
    if (*(short **)(unaff_EBP + -0x14) == unaff_EBX) {
      param_3 = (IBinding *)0x80004003;
      param_2 = (int *)0x40c234;
      FUN_00878dfb();
    }
    param_3 = (IBinding *)(unaff_EBP + -0x98);
    param_2 = (int *)(unaff_EBP + -0x78);
    param_1 = (short *)0x1;
    iVar3 = (**(code **)(**(int **)(unaff_EBP + -0x14) + 0xc))();
    if (iVar3 != 0) break;
    param_3 = (IBinding *)(unaff_EBP + -0x78);
    param_2 = (int *)(unaff_EBP + -0x3c);
    param_1 = (short *)0x40c25f;
    FUN_00405a23();
    param_2 = (int *)(unaff_EBP + -0x3c);
    *(undefined1 **)(unaff_EBP + -0x28) = &stack0x0000000c;
    param_1 = (short *)0x40c270;
    FUN_0040810c();
    param_2 = (int *)(unaff_EBP + -0x88);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    param_1 = (short *)0x40c283;
    FUN_0040263d();
    param_1 = (short *)0x40c28a;
    FUN_004048a4();
    param_3 = (IBinding *)(unaff_EBP + -0x88);
    param_2 = (int *)(unaff_EBP + -0x9c);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    param_1 = (short *)0x40c2a1;
    param_3 = (IBinding *)FUN_00412348();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    param_2 = (int *)0x40c2b0;
    FUN_004172b7();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    param_3 = (IBinding *)0x40c2bf;
    FUN_004027b3();
    if (*(short **)(unaff_EBP + -0x24) != unaff_EBX) goto code_r0x0040c2ca;
  }
  *(undefined1 **)(unaff_EBP + 0xc) = &stack0x00000008;
  param_1 = (short *)0x47d;
  FUN_00679e4e();
  param_1 = (short *)(unaff_EBP + -0xb0);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_0040263d();
  param_2 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  param_1 = (short *)0x40c5ea;
  iVar3 = FUN_00412550();
  param_1 = (short *)(unaff_EBP + -0xb0);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  param_3 = (IBinding *)FUN_00402bc3();
  if ((int)param_3 < (int)unaff_EBX) {
    param_2 = (int *)0x40c60f;
    FUN_00878dfb();
  }
  iVar5 = *(int *)(unaff_EBP + -0x1c);
  if ((-(int)unaff_EBX != -(uint)(iVar3 != 0)) &&
     (psVar2 = *(short **)(iVar5 + 0x28), psVar2 != unaff_EBX)) {
    do {
      if ((psVar2 != *(short **)(iVar5 + 0x24)) && (psVar2 != *(short **)(iVar5 + 0x28))) {
        param_3 = (IBinding *)0x40c62f;
        FUN_0041394f();
        param_2 = (int *)0x40c637;
        param_3 = (IBinding *)psVar2;
        FUN_00412de3();
        iVar5 = *(int *)(unaff_EBP + -0x1c);
      }
      iVar6 = *(int *)((-(uint)(psVar2 != (short *)0x0) & (uint)(psVar2 + -8)) + 8);
      psVar2 = (short *)(-(uint)(iVar6 != 0) & iVar6 + 0x10U);
    } while (psVar2 != (short *)0x0);
  }
  *(uint *)(iVar5 + 0x14) = (uint)(iVar3 != 0);
  param_3 = (IBinding *)0x40c668;
  uVar4 = FUN_00415c64();
  param_3 = (IBinding *)(unaff_EBP + -0x20);
  param_2 = (int *)0x40c675;
  FUN_00412b4b();
  *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x34) = uVar4;
  iVar3 = *(int *)(unaff_EBP + -0x1c);
  param_3 = (IBinding *)(unaff_EBP + -0x20);
  param_2 = (int *)(unaff_EBP + -0x68);
  param_1 = (short *)0x40c68e;
  uVar4 = FUN_00415e42();
  *(undefined4 *)(iVar3 + 0x30) = uVar4;
  iVar3 = *(int *)(unaff_EBP + -0x1c);
  param_3 = (IBinding *)0x40c69a;
  uVar4 = (*DAT_0097b704)();
  *(undefined4 *)(iVar3 + 0x2c) = uVar4;
  param_3 = (IBinding *)0x40c6a5;
  FUN_004027f8();
  param_3 = (IBinding *)(unaff_EBP + -0x78);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  param_2 = (int *)0x40c6b2;
  param_3 = (IBinding *)FUN_00402bc3();
  if ((int)param_3 < (int)unaff_EBX) {
    param_2 = (int *)0x40c6bd;
    FUN_00878dfb();
  }
  param_3 = (IBinding *)0x40c6c5;
  FUN_004027eb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  param_3 = (IBinding *)0x40c6d1;
  FUN_00412b35();
  *(short **)(unaff_EBP + -0x40) = unaff_EBX;
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  if (*(short **)(unaff_EBP + 0x10) != unaff_EBX) {
    param_3 = *(IBinding **)(unaff_EBP + 0x10);
    param_2 = (int *)(unaff_EBP + 8);
    param_1 = (short *)0x40c6ed;
    FUN_0054e2c6();
    psVar2 = *(short **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    if ((psVar2 == unaff_EBX) || (*psVar2 == (short)unaff_EBX)) {
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
    }
    else {
      param_3 = (IBinding *)&DAT_00980690;
      param_2 = (int *)0x40c718;
      FUN_00403191();
      param_3 = (IBinding *)&DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      param_2 = (int *)0x40c725;
      FUN_00403191();
      param_3 = (IBinding *)(unaff_EBP + -0x88);
      param_2 = (int *)(unaff_EBP + -0x78);
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      param_1 = (short *)0x40c73c;
      FUN_00411641();
      *(undefined1 **)(unaff_EBP + -0x34) = &stack0x00000004;
      FUN_004033a1();
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      FUN_00405a1d();
      FUN_00402660();
      param_3 = (IBinding *)FUN_00404a02();
      param_2 = (int *)(unaff_EBP + 0xc);
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      param_1 = (short *)0x40c774;
      param_3 = (IBinding *)FUN_00412348();
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      param_2 = (int *)0x40c783;
      FUN_00417232();
      param_3 = (IBinding *)0x40c78b;
      FUN_004027b3();
      param_3 = (IBinding *)(unaff_EBP + -0xb0);
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      param_2 = (int *)0x40c79b;
      param_3 = (IBinding *)FUN_00402bc3();
      if ((int)param_3 < (int)unaff_EBX) {
        param_2 = (int *)0x40c7a6;
        FUN_00878dfb();
      }
      param_3 = (IBinding *)(unaff_EBP + -0x78);
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      param_2 = (int *)0x40c7b3;
      param_3 = (IBinding *)FUN_00402bc3();
      if ((int)param_3 < (int)unaff_EBX) {
        param_2 = (int *)0x40c7be;
        FUN_00878dfb();
      }
      param_3 = (IBinding *)(unaff_EBP + -0x88);
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      param_2 = (int *)0x40c7ce;
      param_3 = (IBinding *)FUN_00402bc3();
      if ((int)param_3 < (int)unaff_EBX) {
        param_2 = (int *)0x40c7d9;
        FUN_00878dfb();
      }
      if (*(short **)(unaff_EBP + 0x10) != unaff_EBX) {
        param_3 = (IBinding *)0x40c7ea;
        FUN_0087a1b0();
        param_2 = *(int **)(unaff_EBP + -0x2c);
        param_1 = (short *)0x40c7f5;
        param_3 = (IBinding *)&stack0x00000010;
        param_2 = (int *)FUN_00412335();
        *(undefined1 **)(unaff_EBP + -0x10) = &stack0x0000000c;
        param_1 = (short *)0x40c803;
        FUN_00402e8e();
        param_2 = (int *)(unaff_EBP + -0xc0);
        *(undefined1 *)(unaff_EBP + -4) = 0x2b;
        param_1 = (short *)0x40c816;
        FUN_0040263d();
        param_1 = (short *)0x40c81d;
        param_3 = (IBinding *)FUN_004048a4();
        param_2 = (int *)(unaff_EBP + -0x34);
        *(undefined1 *)(unaff_EBP + -4) = 0x30;
        param_1 = (short *)0x40c82b;
        param_3 = (IBinding *)FUN_00412348();
        *(undefined1 *)(unaff_EBP + -4) = 0x31;
        param_2 = (int *)0x40c83a;
        param_3 = (IBinding *)FUN_0041a425();
        if (((int)param_3 < (int)unaff_EBX) && (param_3 != (IBinding *)0x80004002)) {
          param_2 = (int *)0x40c84b;
          FUN_00878dfb();
        }
        param_3 = (IBinding *)0x40c853;
        FUN_004027b3();
        param_3 = (IBinding *)(unaff_EBP + -0xc0);
        *(undefined1 *)(unaff_EBP + -4) = 0x2b;
        param_2 = (int *)0x40c863;
        iVar3 = FUN_00402bc3();
        if (iVar3 < (int)unaff_EBX) {
          param_2 = (int *)0x40c86e;
          param_3 = (IBinding *)iVar3;
          FUN_00878dfb();
          param_3 = (IBinding *)extraout_ECX_00;
        }
        if (*(short **)(unaff_EBP + 0x10) != unaff_EBX) {
          param_2 = (int *)(unaff_EBP + -0x38);
          *(undefined1 **)(unaff_EBP + -0x10) = &stack0x0000000c;
          param_1 = (short *)0x40c882;
          FUN_0040810c();
          param_2 = (int *)(unaff_EBP + -0xc0);
          *(undefined1 *)(unaff_EBP + -4) = 0x2b;
          param_1 = (short *)0x40c895;
          FUN_0040263d();
          param_1 = (short *)0x40c89c;
          param_3 = (IBinding *)FUN_004048a4();
          param_2 = (int *)(unaff_EBP + -0x34);
          *(undefined1 *)(unaff_EBP + -4) = 0x33;
          param_1 = (short *)0x40c8aa;
          param_3 = (IBinding *)FUN_00412348();
          *(undefined1 *)(unaff_EBP + -4) = 0x34;
          param_2 = (int *)0x40c8b9;
          param_3 = (IBinding *)FUN_0041a425();
          if (((int)param_3 < (int)unaff_EBX) && (param_3 != (IBinding *)0x80004002)) {
            param_2 = (int *)0x40c8ca;
            FUN_00878dfb();
          }
          param_3 = (IBinding *)0x40c8d2;
          FUN_004027b3();
          param_3 = (IBinding *)(unaff_EBP + -0xc0);
          *(undefined1 *)(unaff_EBP + -4) = 0x2b;
          param_2 = (int *)0x40c8e2;
          param_3 = (IBinding *)FUN_00402bc3();
          if ((int)param_3 < (int)unaff_EBX) {
            param_2 = (int *)0x40c8ed;
            FUN_00878dfb();
          }
        }
      }
      param_3 = (IBinding *)0x40c8f5;
      FUN_004027eb();
      psVar2 = *(short **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
    }
    if (psVar2 != unaff_EBX) {
      param_3 = (IBinding *)(psVar2 + -6);
      param_2 = (int *)0x40c909;
      FUN_00403384();
    }
    if (*(short **)(unaff_EBP + -0x40) != unaff_EBX) {
      psVar2 = *(short **)(*(int *)(unaff_EBP + -0x1c) + 0x24);
      *(short **)(unaff_EBP + -0x2c) = unaff_EBX;
      *(undefined4 *)(unaff_EBP + -0x48) = 1;
      *(short **)(unaff_EBP + -0x30) = psVar2;
      if (psVar2 != unaff_EBX) {
        while( true ) {
          iVar3 = *(int *)(unaff_EBP + -0x30);
          iVar5 = *(int *)((-(uint)(iVar3 != 0) & iVar3 - 0x10U) + 4);
          iVar3 = *(int *)(iVar3 + 4);
          *(int *)(unaff_EBP + -0x44) = iVar3;
          uVar4 = *(undefined4 *)(iVar3 + 0xc);
          *(uint *)(unaff_EBP + -0x30) = -(uint)(iVar5 != 0) & iVar5 + 0x10U;
          *(undefined4 *)(unaff_EBP + 8) = uVar4;
          param_3 = (IBinding *)0x40c963;
          FUN_004125f3();
          *(undefined1 *)(unaff_EBP + -4) = 0x35;
          param_3 = (IBinding *)0x40c96f;
          FUN_0087a1b0();
          param_2 = *(int **)(unaff_EBP + -0x2c);
          param_1 = (short *)0x40c97a;
          param_3 = (IBinding *)&stack0x00000010;
          param_2 = (int *)FUN_00412335();
          *(undefined1 **)(unaff_EBP + -0x10) = &stack0x0000000c;
          param_1 = (short *)0x40c988;
          FUN_00402e8e();
          param_2 = (int *)(unaff_EBP + -100);
          *(undefined1 *)(unaff_EBP + -4) = 0x35;
          param_1 = (short *)0x40c998;
          FUN_0040263d();
          param_1 = (short *)0x40c99f;
          FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x37;
          if (*(short *)(unaff_EBP + -100) == 0) break;
          param_3 = (IBinding *)(unaff_EBP + -100);
          param_2 = (int *)(unaff_EBP + -0x34);
          param_1 = (short *)0x40c9bc;
          param_3 = (IBinding *)FUN_00412348();
          *(undefined1 *)(unaff_EBP + -4) = 0x38;
          param_2 = (int *)0x40c9cb;
          FUN_004172b7();
          *(undefined1 *)(unaff_EBP + -4) = 0x3a;
          param_3 = (IBinding *)0x40c9d7;
          FUN_004027b3();
          if (*(int *)(unaff_EBP + 0x10) == 0) {
            param_3 = (IBinding *)0x40ceef;
            FUN_004125e6();
            break;
          }
          if ((*(int *)(*(int *)(unaff_EBP + -0x1c) + 0x14) != 0) &&
             (*(uint *)(unaff_EBP + -0x2c) == *(uint *)(*(int *)(unaff_EBP + -0x1c) + 0x20) >> 1)) {
            *(undefined4 *)(unaff_EBP + -0x48) = 0xffffffff;
          }
          if (*(int *)(unaff_EBP + 8) == 0) {
            param_3 = (IBinding *)0x80004003;
            param_2 = (int *)0x40ca06;
            FUN_00878dfb();
          }
          param_3 = (IBinding *)0x40ca11;
          iVar3 = FUN_0040eea9();
          param_3 = (IBinding *)0x40ca1c;
          iVar5 = FUN_0040eea9();
          *(int *)(unaff_EBP + -0x24) = -iVar5;
          if (-iVar3 <= -iVar5) {
            *(int *)(unaff_EBP + -0x24) = -iVar3;
          }
          if (*(int *)(unaff_EBP + 0x10) == 0) {
            param_3 = (IBinding *)0x80004003;
            param_2 = (int *)0x40ca35;
            FUN_00878dfb();
            if (*(int *)(unaff_EBP + 0x10) == 0) {
              param_3 = (IBinding *)0x80004003;
              param_2 = (int *)0x40ca40;
              FUN_00878dfb();
            }
          }
          if (*(int *)(unaff_EBP + 8) == 0) {
            param_3 = (IBinding *)0x80004003;
            param_2 = (int *)0x40ca4e;
            FUN_00878dfb();
          }
          *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + 8);
          if (*(int *)(unaff_EBP + 8) == 0) {
            param_3 = (IBinding *)0x80004003;
            param_2 = (int *)0x40ca5e;
            FUN_00878dfb();
          }
          param_3 = (IBinding *)0x40ca69;
          uVar4 = FUN_0040eea9();
          *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
          param_3 = (IBinding *)0x40ca75;
          iVar3 = FUN_0040e48b();
          iVar3 = iVar3 - *(int *)(unaff_EBP + -0x10);
          param_3 = (IBinding *)0x40ca83;
          iVar5 = FUN_0040e48b();
          param_3 = (IBinding *)0x40ca8d;
          iVar6 = FUN_0040eea9();
          *(int *)(unaff_EBP + -0x3c) = iVar5 - iVar6;
          if (iVar5 - iVar6 <= iVar3) {
            *(int *)(unaff_EBP + -0x3c) = iVar3;
          }
          if (*(int *)(unaff_EBP + 0x10) == 0) {
            param_3 = (IBinding *)0x80004003;
            param_2 = (int *)0x40caa5;
            FUN_00878dfb();
          }
          if (*(int *)(unaff_EBP + 8) == 0) {
            param_3 = (IBinding *)0x80004003;
            param_2 = (int *)0x40cab1;
            FUN_00878dfb();
          }
          param_3 = (IBinding *)0x40cabc;
          iVar3 = FUN_0040eed0();
          param_3 = (IBinding *)0x40cac7;
          iVar5 = FUN_0040eed0();
          *(int *)(unaff_EBP + -0x18) = -iVar5;
          if (-iVar3 <= -iVar5) {
            *(int *)(unaff_EBP + -0x18) = -iVar3;
          }
          if (*(int *)(unaff_EBP + 0x10) == 0) {
            param_3 = (IBinding *)0x80004003;
            param_2 = (int *)0x40cae0;
            FUN_00878dfb();
            if (*(int *)(unaff_EBP + 0x10) == 0) {
              param_3 = (IBinding *)0x80004003;
              param_2 = (int *)0x40caeb;
              FUN_00878dfb();
            }
          }
          if (*(int *)(unaff_EBP + 8) == 0) {
            param_3 = (IBinding *)0x80004003;
            param_2 = (int *)0x40caf9;
            FUN_00878dfb();
          }
          *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + 8);
          if (*(int *)(unaff_EBP + 8) == 0) {
            param_3 = (IBinding *)0x80004003;
            param_2 = (int *)0x40cb09;
            FUN_00878dfb();
          }
          param_3 = (IBinding *)0x40cb14;
          uVar4 = FUN_0040eed0();
          *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
          param_3 = (IBinding *)0x40cb20;
          iVar3 = FUN_0040e53d();
          iVar3 = iVar3 - *(int *)(unaff_EBP + -0x10);
          param_3 = (IBinding *)0x40cb2e;
          iVar5 = FUN_0040e53d();
          param_3 = (IBinding *)0x40cb38;
          iVar6 = FUN_0040eed0();
          *(int *)(unaff_EBP + -0x14) = iVar5 - iVar6;
          if (iVar5 - iVar6 <= iVar3) {
            *(int *)(unaff_EBP + -0x14) = iVar3;
          }
          *(undefined4 *)(unaff_EBP + 0xc) = 0;
          param_3 = (IBinding *)0x3af;
          param_2 = (int *)(unaff_EBP + -0x4c);
          *(undefined1 *)(unaff_EBP + -4) = 0x3b;
          param_1 = (short *)0x40cb5f;
          piVar7 = (int *)FUN_00679e4e();
          puVar8 = (undefined4 *)*piVar7;
          *(undefined1 *)(unaff_EBP + -4) = 0x3c;
          if (puVar8 == (undefined4 *)0x0) {
            param_1 = (short *)0x0;
          }
          else {
            param_1 = (short *)*puVar8;
          }
          param_3 = (IBinding *)0x0;
          param_2 = (int *)(unaff_EBP + 0xc);
          FUN_0040381b();
          *(undefined1 *)(unaff_EBP + -4) = 0x3b;
          param_3 = (IBinding *)0x40cb93;
          FUN_00402fa6();
          param_3 = (IBinding *)&DAT_00980690;
          param_2 = (int *)0x40cba4;
          FUN_00403191();
          param_3 = (IBinding *)&DAT_00980690;
          *(undefined1 *)(unaff_EBP + -4) = 0x3d;
          param_2 = (int *)0x40cbb1;
          FUN_00403191();
          piVar7 = *(int **)(unaff_EBP + 0xc);
          *(undefined1 *)(unaff_EBP + -4) = 0x3e;
          if (piVar7 == (int *)0x0) {
            param_3 = (IBinding *)0x80004003;
            param_2 = (int *)0x40cbc2;
            FUN_00878dfb();
            piVar7 = *(int **)(unaff_EBP + 0xc);
          }
          param_1 = *(short **)(unaff_EBP + -0x84);
          iVar3 = *piVar7;
          param_2 = *(int **)(unaff_EBP + -0x80);
          param_3 = *(IBinding **)(unaff_EBP + -0x7c);
          *(int **)(unaff_EBP + -0x10) = piVar7;
          iVar3 = (**(code **)(iVar3 + 0x2c))
                            (piVar7,*(int *)(unaff_EBP + -0x3c) - *(int *)(unaff_EBP + -0x24),
                             *(int *)(unaff_EBP + -0x14) - *(int *)(unaff_EBP + -0x18),
                             *(undefined4 *)(unaff_EBP + -0x78),*(undefined4 *)(unaff_EBP + -0x74),
                             *(undefined4 *)(unaff_EBP + -0x70),*(undefined4 *)(unaff_EBP + -0x6c));
          if (iVar3 < 0) {
            FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963cc8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x3d;
          iVar3 = FUN_00402bc3(unaff_EBP + -0x78);
          if (iVar3 < 0) {
            FUN_00878dfb(iVar3);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x3b;
          iVar3 = FUN_00402bc3(unaff_EBP + -0x88);
          if (iVar3 < 0) {
            FUN_00878dfb(iVar3);
          }
          FUN_004031b7(0xff,3);
          *(undefined1 *)(unaff_EBP + -4) = 0x3f;
          if (*(int *)(unaff_EBP + 8) == 0) {
            FUN_00878dfb(0x80004003);
            if (*(int *)(unaff_EBP + 8) == 0) {
              FUN_00878dfb(0x80004003);
            }
          }
          if (*(int *)(unaff_EBP + 0xc) == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar7 = *(int **)(unaff_EBP + 0xc);
          *(int **)(unaff_EBP + -0x14) = piVar7;
          *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + 8);
          iVar5 = FUN_0040eed0();
          iVar3 = *(int *)(unaff_EBP + -0x18);
          iVar6 = FUN_0040eea9();
          iVar3 = (**(code **)(*piVar7 + 0x80))
                            (*(undefined4 *)(unaff_EBP + -0x14),
                             -(iVar6 + *(int *)(unaff_EBP + -0x24)),-(iVar5 + iVar3),
                             *(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + -0xd0),
                             *(undefined4 *)(unaff_EBP + -0xcc),*(undefined4 *)(unaff_EBP + -200),
                             *(undefined4 *)(unaff_EBP + -0xc4));
          if (iVar3 < 0) {
            FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963cc8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x3b;
          iVar3 = FUN_00402bc3(unaff_EBP + -0xd0);
          if (iVar3 < 0) {
            FUN_00878dfb(iVar3);
          }
          FUN_004031b7(0xff,3);
          *(undefined1 *)(unaff_EBP + -4) = 0x40;
          if (*(int *)(unaff_EBP + 0x10) == 0) {
            FUN_00878dfb(0x80004003);
            if (*(int *)(unaff_EBP + 0x10) == 0) {
              FUN_00878dfb(0x80004003);
            }
          }
          if (*(int *)(unaff_EBP + 0xc) == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar7 = *(int **)(unaff_EBP + 0xc);
          *(int **)(unaff_EBP + -0x14) = piVar7;
          *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + 0x10);
          iVar5 = FUN_0040eed0();
          iVar3 = *(int *)(unaff_EBP + -0x18);
          iVar6 = FUN_0040eea9();
          iVar3 = (**(code **)(*piVar7 + 0x80))
                            (*(undefined4 *)(unaff_EBP + -0x14),
                             -(iVar6 + *(int *)(unaff_EBP + -0x24)),-(iVar5 + iVar3),
                             *(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + -0xe0),
                             *(undefined4 *)(unaff_EBP + -0xdc),*(undefined4 *)(unaff_EBP + -0xd8),
                             *(undefined4 *)(unaff_EBP + -0xd4));
          if (iVar3 < 0) {
            FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963cc8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x3b;
          iVar3 = FUN_00402bc3(unaff_EBP + -0xe0);
          if (iVar3 < 0) {
            FUN_00878dfb(iVar3);
          }
          if (*(int *)(unaff_EBP + 0xc) == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar7 = *(int **)(unaff_EBP + 0xc);
          iVar3 = (**(code **)(*piVar7 + 0x70))(piVar7,-*(int *)(unaff_EBP + -0x24));
          if (iVar3 < 0) {
            FUN_00878e09(iVar3,piVar7,&DAT_00963cc8);
          }
          if (*(int *)(unaff_EBP + 0xc) == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar7 = *(int **)(unaff_EBP + 0xc);
          iVar3 = (**(code **)(*piVar7 + 0x78))(piVar7,-*(int *)(unaff_EBP + -0x18));
          if (iVar3 < 0) {
            param_3 = (IBinding *)&DAT_00963cc8;
            param_1 = (short *)iVar3;
            param_2 = piVar7;
            FUN_00878e09();
          }
          param_3 = (IBinding *)0x44;
          param_2 = (int *)0x40cdfc;
          iVar3 = FUN_004029b9();
          *(int *)(unaff_EBP + -0x10) = iVar3;
          *(undefined1 *)(unaff_EBP + -4) = 0x41;
          if (iVar3 == 0) {
            iVar3 = 0;
          }
          else {
            param_3 = (IBinding *)0x40ce0e;
            iVar3 = FUN_0040cfa7();
          }
          param_3 = *(IBinding **)(unaff_EBP + 0xc);
          *(undefined1 *)(unaff_EBP + -4) = 0x3b;
          param_2 = (int *)0x40ce23;
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar3 + 0xc),param_3);
          iVar5 = *(int *)(unaff_EBP + -0x44);
          puVar8 = (undefined4 *)(iVar5 + 0x10);
          puVar9 = (undefined4 *)(iVar3 + 0x10);
          for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          *(undefined4 *)(iVar3 + 0x40) = *(undefined4 *)(iVar5 + 0x40);
          *(int *)(unaff_EBP + -0x50) = iVar3;
          param_3 = (IBinding *)0x40ce42;
          FUN_00412e1c();
          *(undefined1 *)(unaff_EBP + -4) = 0x42;
          param_3 = (IBinding *)0x40ce4e;
          FUN_0041394f();
          param_3 = (IBinding *)(unaff_EBP + -0x54);
          param_2 = (int *)0x40ce59;
          FUN_00412de3();
          *(undefined1 *)(unaff_EBP + -4) = 0x3b;
          param_3 = (IBinding *)0x40ce65;
          FUN_00412e2e();
          param_3 = (IBinding *)0x40ce6d;
          FUN_004125e6();
          param_3 = (IBinding *)0x40ce75;
          FUN_004125e6();
          param_3 = (IBinding *)(unaff_EBP + -100);
          *(undefined1 *)(unaff_EBP + -4) = 0x35;
          param_2 = (int *)0x40ce82;
          param_3 = (IBinding *)FUN_00402bc3();
          if ((int)param_3 < 0) {
            param_2 = (int *)0x40ce8d;
            FUN_00878dfb();
          }
          param_3 = (IBinding *)0x40ce95;
          FUN_004125e6();
          *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + *(int *)(unaff_EBP + -0x48);
          if (*(int *)(unaff_EBP + -0x30) == 0) goto LAB_0040cea5;
        }
        param_3 = (IBinding *)(unaff_EBP + -100);
        *(undefined1 *)(unaff_EBP + -4) = 0x35;
        param_2 = (int *)0x40cefc;
        param_3 = (IBinding *)FUN_00402bc3();
        if ((int)param_3 < 0) {
          param_2 = (int *)0x40cf07;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x23;
        param_3 = (IBinding *)0x40cf13;
        FUN_004125e6();
        if (*(int *)(unaff_EBP + -0x30) != 0) goto LAB_0040cf18;
      }
LAB_0040cea5:
      param_3 = (IBinding *)0x40cead;
      FUN_004027eb();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        param_3 = (IBinding *)0x0;
        param_2 = (int *)0x40cec1;
        FUN_004130e3();
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      }
      if (*(int *)(unaff_EBP + -0x38) != 0) {
        param_3 = (IBinding *)0x40ced0;
        FUN_004030b1();
      }
      goto LAB_0040ced0;
    }
  }
LAB_0040cf18:
  iVar3 = *(int *)(unaff_EBP + -0x1c);
  param_3 = (IBinding *)0x40cf23;
  FUN_0041398d();
  param_3 = (IBinding *)(iVar3 + 0x18);
  param_2 = (int *)0x40cf2f;
  FUN_004126ff();
  param_3 = (IBinding *)0x40cf37;
  FUN_004027eb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  param_3 = (IBinding *)0x40cf43;
  FUN_00412b84();
  param_3 = (IBinding *)0x40cf4b;
  FUN_00402fa6();
LAB_0040ced0:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
code_r0x0040c2ca:
  param_3 = (IBinding *)(unaff_EBP + -0x30);
  param_2 = (int *)0x40c2d3;
  FUN_00404e7f();
  *(undefined1 **)(unaff_EBP + -0x28) = &stack0x00000004;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_00679e4e(&stack0x00000004);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_0040263d();
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  param_1 = (short *)0x40c311;
  psVar2 = (short *)FUN_004032b4();
  *(short **)(unaff_EBP + -0x8c) = psVar2;
  *(short **)(unaff_EBP + -0x18) = unaff_EBX;
  if (psVar2 != unaff_EBX) {
    param_3 = (IBinding *)(unaff_EBP + -0x8c);
    param_2 = (int *)0x40c32d;
    param_3 = (IBinding *)FUN_0041a4e5();
    if (((int)param_3 < (int)unaff_EBX) && (param_3 != (IBinding *)0x80004002)) {
      param_2 = (int *)0x40c33e;
      FUN_00878dfb();
    }
  }
  param_3 = (IBinding *)(unaff_EBP + -0xd0);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  param_2 = (int *)0x40c34e;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    param_2 = (int *)0x40c359;
    param_3 = (IBinding *)iVar3;
    FUN_00878dfb();
    param_3 = (IBinding *)extraout_ECX;
  }
  *(undefined1 **)(unaff_EBP + -0x28) = &stack0x00000004;
  param_1 = (short *)param_3;
  param_2 = (int *)unaff_EBX;
  param_3 = (IBinding *)unaff_EBX;
  FUN_00679e4e(&stack0x00000004);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_0040263d();
  goto code_r0x0040c383;
}


