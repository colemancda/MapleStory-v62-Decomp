/* ptr_0040df3f - 0x0040df3f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0040df3f(int *param_1,int *param_2,IBinding *param_3)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  
  do {
    FUN_00679e4e();
    param_1 = (int *)(unaff_EBP + -0xb8);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    FUN_0040263d();
    param_2 = (int *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    param_1 = (int *)0x40df6a;
    uVar4 = FUN_00412550();
    *(undefined4 *)(unaff_ESI + 0x40) = uVar4;
    param_1 = (int *)(unaff_EBP + -0xb8);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    param_3 = (IBinding *)FUN_00402bc3();
    if ((int)param_3 < (int)unaff_EBX) {
      param_2 = (int *)0x40df8a;
      FUN_00878dfb();
    }
    param_3 = (IBinding *)0xffffffff;
    *(undefined1 **)(unaff_EBP + -0x10) = &stack0x00000008;
    param_1 = (int *)0x3b6;
    FUN_00679e4e();
    param_1 = (int *)(unaff_EBP + -100);
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    FUN_004115d9();
    FUN_00404e7f();
    param_1 = (int *)(unaff_EBP + -0xe8);
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    FUN_0040263d();
    param_2 = (int *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    param_1 = (int *)0x40dfd9;
    uVar4 = FUN_00412550();
    *(undefined4 *)(unaff_ESI + 0x44) = uVar4;
    param_1 = (int *)(unaff_EBP + -0xe8);
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    param_3 = (IBinding *)FUN_00402bc3();
    if ((int)param_3 < (int)unaff_EBX) {
      param_2 = (int *)0x40dff9;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    param_3 = (IBinding *)0x40e005;
    FUN_004027eb();
    param_3 = (IBinding *)0xffffffff;
    *(undefined1 **)(unaff_EBP + -0x10) = &stack0x00000008;
    param_1 = (int *)0x3b7;
    FUN_00679e4e();
    param_1 = (int *)(unaff_EBP + -0x4c);
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    FUN_004115d9();
    FUN_00404e7f();
    param_1 = (int *)(unaff_EBP + -200);
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    FUN_0040263d();
    param_2 = (int *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    param_1 = (int *)0x40e054;
    uVar4 = FUN_00412550();
    *(undefined4 *)(unaff_ESI + 0x48) = uVar4;
    param_1 = (int *)(unaff_EBP + -200);
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    param_3 = (IBinding *)FUN_00402bc3();
    if ((int)param_3 < (int)unaff_EBX) {
      param_2 = (int *)0x40e074;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    param_3 = (IBinding *)0x40e080;
    FUN_004027eb();
    *(undefined1 **)(unaff_EBP + -0x10) = &stack0x00000004;
    FUN_00679e4e(&stack0x00000004);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    FUN_0040263d();
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    param_1 = (int *)0x40e0ba;
    piVar5 = (int *)FUN_004032b4();
    *(int **)(unaff_EBP + -0x6c) = piVar5;
    *(int **)(unaff_EBP + -0x1c) = unaff_EBX;
    if (piVar5 != unaff_EBX) {
      param_3 = (IBinding *)(unaff_EBP + -0x6c);
      param_2 = (int *)0x40e0d0;
      param_3 = (IBinding *)FUN_0041a4e5();
      if (((int)param_3 < (int)unaff_EBX) && (param_3 != (IBinding *)0x80004002)) {
        param_2 = (int *)0x40e0e1;
        FUN_00878dfb();
      }
    }
    param_3 = (IBinding *)(unaff_EBP + -0xd8);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    param_2 = (int *)0x40e0f1;
    iVar6 = FUN_00402bc3();
    if (iVar6 < (int)unaff_EBX) {
      param_2 = (int *)0x40e0fc;
      param_3 = (IBinding *)iVar6;
      FUN_00878dfb();
      param_3 = (IBinding *)extraout_ECX_00;
    }
    *(undefined1 **)(unaff_EBP + -0x10) = &stack0x00000004;
    param_1 = (int *)param_3;
    FUN_00679e4e(&stack0x00000004);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    FUN_0040263d();
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    param_1 = (int *)0x40e136;
    piVar5 = (int *)FUN_004032b4();
    *(int **)(unaff_EBP + -0x60) = piVar5;
    *(int **)(unaff_EBP + 0x10) = unaff_EBX;
    if (piVar5 != unaff_EBX) {
      param_3 = (IBinding *)(unaff_EBP + -0x60);
      param_2 = (int *)0x40e14c;
      param_3 = (IBinding *)FUN_0041a4e5();
      if (((int)param_3 < (int)unaff_EBX) && (param_3 != (IBinding *)0x80004002)) {
        param_2 = (int *)0x40e15d;
        FUN_00878dfb();
      }
    }
    param_3 = (IBinding *)(unaff_EBP + -0x98);
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    param_2 = (int *)0x40e16d;
    param_3 = (IBinding *)FUN_00402bc3();
    if ((int)param_3 < (int)unaff_EBX) {
      param_2 = (int *)0x40e178;
      FUN_00878dfb();
    }
    param_2 = (int *)0x40e181;
    cVar3 = FUN_004115ad();
    piVar5 = unaff_EBX;
    piVar2 = unaff_EBX;
    param_3 = (IBinding *)unaff_EBX;
    if (cVar3 == '\0') {
      param_2 = (int *)0x40e192;
      cVar3 = FUN_004115ad();
      piVar5 = unaff_EBX;
      piVar2 = unaff_EBX;
      if (cVar3 == '\0') {
        if (*(int **)(unaff_EBP + 0x10) == unaff_EBX) {
          param_3 = (IBinding *)0x80004003;
          param_2 = (int *)0x40e1a5;
          FUN_00878dfb();
          if (*(int **)(unaff_EBP + 0x10) == unaff_EBX) {
            param_3 = (IBinding *)0x80004003;
            param_2 = (int *)0x40e1b4;
            FUN_00878dfb();
          }
        }
        *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + 0x10);
        if (*(int **)(unaff_EBP + -0x1c) == unaff_EBX) {
          param_3 = (IBinding *)0x80004003;
          param_2 = (int *)0x40e1c9;
          FUN_00878dfb();
        }
        *(int **)(unaff_EBP + -0x68) = *(int **)(unaff_EBP + -0x1c);
        if (*(int **)(unaff_EBP + -0x1c) == unaff_EBX) {
          param_3 = (IBinding *)0x80004003;
          param_2 = (int *)0x40e1dd;
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x1c);
        param_3 = (IBinding *)0x40e1eb;
        param_3 = (IBinding *)FUN_00404abb();
        param_2 = (int *)0x40e1f4;
        param_2 = (int *)FUN_00404a94();
        param_1 = (int *)0x40e1fd;
        param_1 = (int *)FUN_00404abb();
        FUN_00404a94();
        piVar5 = param_1;
        piVar2 = param_2;
      }
    }
    param_2 = piVar2;
    param_1 = piVar5;
    FUN_004114f3(unaff_ESI + 0x10);
    *(int *)(unaff_EBP + -0x44) = unaff_ESI;
    param_3 = (IBinding *)0x40e224;
    FUN_00412eb6();
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    param_3 = (IBinding *)0x40e230;
    FUN_00413a3f();
    param_3 = (IBinding *)(unaff_EBP + -0x48);
    param_2 = (int *)0x40e23b;
    FUN_00412e7d();
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    param_3 = (IBinding *)0x40e247;
    FUN_00412ec8();
    param_3 = (IBinding *)0x40e24f;
    FUN_004125d9();
    param_3 = (IBinding *)0x40e257;
    FUN_004125d9();
    param_3 = *(IBinding **)(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    if (param_3 != (IBinding *)unaff_EBX) {
      param_2 = (int *)0x40e268;
      (**(code **)(*(int *)param_3 + 8))();
    }
    param_3 = *(IBinding **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    if (param_3 != (IBinding *)unaff_EBX) {
      param_2 = (int *)0x40e279;
      (**(code **)(*(int *)param_3 + 8))();
    }
    while( true ) {
      param_3 = (IBinding *)(unaff_EBP + -0xa8);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      param_2 = (int *)0x40e289;
      param_3 = (IBinding *)FUN_00402bc3();
      if ((int)param_3 < (int)unaff_EBX) {
        param_2 = (int *)0x40e294;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      param_3 = (IBinding *)0x40e2a0;
      FUN_00402fa6();
      if (*(int **)(unaff_EBP + -0x30) == unaff_EBX) {
        param_3 = (IBinding *)0x80004003;
        param_2 = (int *)0x40de45;
        FUN_00878dfb();
      }
      param_3 = (IBinding *)(unaff_EBP + -0x5c);
      param_2 = (int *)(unaff_EBP + -0x88);
      param_1 = (int *)0x1;
      iVar6 = (**(code **)(**(int **)(unaff_EBP + -0x30) + 0xc))();
      if (iVar6 != 0) {
        *(undefined1 **)(unaff_EBP + 8) = &stack0x00000008;
        param_1 = (int *)0x47d;
        FUN_00679e4e();
        param_1 = (int *)(unaff_EBP + -0x98);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        FUN_0040263d();
        param_2 = (int *)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x28;
        param_1 = (int *)0x40e2dd;
        iVar6 = FUN_00412550();
        param_1 = (int *)(unaff_EBP + -0x98);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        param_3 = (IBinding *)FUN_00402bc3();
        if ((int)param_3 < (int)unaff_EBX) {
          param_2 = (int *)0x40e302;
          FUN_00878dfb();
        }
        iVar1 = *(int *)(unaff_EBP + 0x14);
        if (((int *)(uint)(iVar6 != 0) != unaff_EBX) &&
           (piVar5 = *(int **)(iVar1 + 0x10), piVar5 != unaff_EBX)) {
          do {
            if ((piVar5 != *(int **)(iVar1 + 0xc)) && (piVar5 != *(int **)(iVar1 + 0x10))) {
              param_2 = (int *)0x40e322;
              param_3 = (IBinding *)piVar5;
              FUN_00411697();
            }
            iVar6 = *(int *)((-(uint)(piVar5 != (int *)0x0) & (uint)(piVar5 + -4)) + 8);
            piVar5 = (int *)(-(uint)(iVar6 != 0) & iVar6 + 0x10U);
          } while (piVar5 != (int *)0x0);
        }
        param_3 = (IBinding *)0x40e34c;
        FUN_00413a7d();
        param_2 = (int *)0x40e354;
        param_3 = (IBinding *)iVar1;
        FUN_0041278b();
        iVar6 = *(int *)(unaff_EBP + -0x14);
        param_3 = (IBinding *)(unaff_EBP + -0x18);
        param_2 = (int *)0x40e369;
        uVar4 = FUN_00411bfb();
        *(undefined4 *)(iVar6 + 0x38) = uVar4;
        iVar6 = *(int *)(unaff_EBP + -0x14);
        param_3 = (IBinding *)(unaff_EBP + -0x18);
        param_2 = (int *)(unaff_EBP + -0x78);
        param_1 = (int *)0x40e37f;
        uVar4 = FUN_00416963();
        *(undefined4 *)(iVar6 + 0x34) = uVar4;
        iVar6 = *(int *)(unaff_EBP + -0x14);
        param_3 = (IBinding *)0x40e38b;
        uVar4 = (*DAT_0097b704)();
        *(undefined4 *)(iVar6 + 0x30) = uVar4;
        param_3 = *(IBinding **)(unaff_EBP + -0x30);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (param_3 != (IBinding *)unaff_EBX) {
          param_2 = (int *)0x40e39f;
          (**(code **)(*(int *)param_3 + 8))();
        }
        param_3 = (IBinding *)(unaff_EBP + -0x88);
        *(undefined1 *)(unaff_EBP + -4) = 7;
        param_2 = (int *)0x40e3af;
        param_3 = (IBinding *)FUN_00402bc3();
        if ((int)param_3 < (int)unaff_EBX) {
          param_2 = (int *)0x40e3ba;
          FUN_00878dfb();
        }
        param_3 = *(IBinding **)(unaff_EBP + 0xc);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        if (param_3 != (IBinding *)unaff_EBX) {
          param_2 = (int *)0x40e3cb;
          (**(code **)(*(int *)param_3 + 8))();
        }
        param_3 = *(IBinding **)(unaff_EBP + -0x20);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (param_3 != (IBinding *)unaff_EBX) {
          param_2 = (int *)0x40e3dc;
          (**(code **)(*(int *)param_3 + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int **)(unaff_EBP + -0x14) != unaff_EBX) {
          param_2 = (int *)0x40e3ee;
          FUN_0041316d();
          *(int **)(unaff_EBP + -0x14) = unaff_EBX;
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int **)(unaff_EBP + -0x28) != unaff_EBX) {
          param_2 = (int *)0x40e403;
          FUN_0041316d();
        }
        ExceptionList = *(void **)(unaff_EBP + -0xc);
        return;
      }
      param_3 = (IBinding *)(unaff_EBP + -0x88);
      param_2 = (int *)(unaff_EBP + -0x34);
      param_1 = (int *)0x40de73;
      FUN_00405a23();
      param_2 = (int *)(unaff_EBP + -0x34);
      *(undefined1 **)(unaff_EBP + -0x10) = &stack0x0000000c;
      param_1 = (int *)0x40de84;
      FUN_0040810c();
      param_2 = (int *)(unaff_EBP + -0xa8);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      param_1 = (int *)0x40de97;
      FUN_0040263d();
      param_1 = (int *)0x40de9e;
      FUN_004048a4();
      param_3 = (IBinding *)(unaff_EBP + -0xa8);
      param_2 = (int *)(unaff_EBP + -0x40);
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      param_1 = (int *)0x40deb2;
      param_3 = (IBinding *)FUN_00412348();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      param_2 = (int *)0x40dec1;
      FUN_004172b7();
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      param_3 = (IBinding *)0x40decd;
      FUN_004027b3();
      if (*(int **)(unaff_EBP + 8) != unaff_EBX) break;
      param_3 = (IBinding *)0x40deda;
      FUN_004125e6();
    }
    param_3 = (IBinding *)0x4c;
    param_2 = (int *)0x40deeb;
    piVar5 = (int *)FUN_004029b9();
    *(int **)(unaff_EBP + -0x10) = piVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    if (piVar5 == unaff_EBX) {
      unaff_ESI = 0;
    }
    else {
      param_3 = (IBinding *)0x40defd;
      unaff_ESI = FUN_0040e447();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    if (*(int **)(unaff_EBP + 8) == unaff_EBX) {
      param_3 = (IBinding *)0x80004003;
      param_2 = (int *)0x40df16;
      FUN_00878dfb();
    }
    param_3 = (IBinding *)(unaff_EBP + -0x24);
    param_2 = (int *)0x40df22;
    FUN_00404e7f();
    param_3 = *(IBinding **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    param_2 = (int *)0x40df31;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_ESI + 0xc),param_3);
    param_3 = (IBinding *)0x78;
    *(undefined1 **)(unaff_EBP + -0x10) = &stack0x00000008;
    param_1 = (int *)0x474;
    param_2 = (int *)extraout_ECX;
  } while( true );
}


