/* FUN_005ec979 - 0x005ec979 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005ec979(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  DWORD DVar7;
  int *piVar8;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_3e0;
  int iStack_3dc;
  int *piStack_3d8;
  int iStack_3d4;
  int iStack_3d0;
  int iStack_3cc;
  
  FUN_00879bb8();
  piVar4 = DAT_0097924c;
  iVar3 = *DAT_0097924c;
  *(int **)(unaff_EBP + -0x2c) = DAT_0097924c;
  if (iVar3 != 0) {
    iVar3 = piVar4[1];
    *(int *)(unaff_EBP + -0x14) = piVar4[3];
    if (iVar3 != 0) {
      if (*(int *)(extraout_ECX + 0x11c) != 0) {
        if (*(int *)(extraout_ECX + 0xf4) != 0) {
          iStack_3cc = 0xfffffffe;
          iStack_3d0 = 0x5ec9d5;
          FUN_004031b7();
          iVar3 = *(int *)(extraout_ECX + 0xf4);
          *(undefined4 *)(unaff_EBP + -4) = 0;
          if (iVar3 == 0) {
            iStack_3cc = 0x5ec9e6;
            FUN_00878dfb();
          }
          iStack_3cc = unaff_EBP + -0x10;
          iStack_3d0 = 0x5ec9f9;
          FUN_0041141a();
          FUN_004125e6();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iStack_3cc = 0x5eca0e;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            iStack_3cc = 0x5eca19;
            FUN_00878dfb();
          }
        }
        *(undefined4 *)(extraout_ECX + 0x11c) = 0;
      }
      if (*(int *)(extraout_ECX + 0x120) != 0) {
        if (*(int *)(extraout_ECX + 0xf8) != 0) {
          iStack_3cc = 0xfffffffe;
          iStack_3d0 = 0x5eca3b;
          FUN_004031b7();
          iVar3 = *(int *)(extraout_ECX + 0xf8);
          *(undefined4 *)(unaff_EBP + -4) = 1;
          if (iVar3 == 0) {
            iStack_3cc = 0x5eca50;
            FUN_00878dfb();
          }
          iStack_3cc = unaff_EBP + -0x10;
          iStack_3d0 = 0x5eca63;
          FUN_0041141a();
          FUN_004125e6();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iStack_3cc = 0x5eca78;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            iStack_3cc = 0x5eca83;
            FUN_00878dfb();
          }
        }
        *(undefined4 *)(extraout_ECX + 0x120) = 0;
      }
      FUN_0056a7a6();
      FUN_0056a7a6();
      if (*(int *)(extraout_ECX + 0xe4) != 0) {
        iStack_3cc = 0xfffffffe;
        iStack_3d0 = 0x5ecab3;
        FUN_004031b7();
        iVar3 = *(int *)(extraout_ECX + 0xe4);
        *(undefined4 *)(unaff_EBP + -4) = 2;
        if (iVar3 == 0) {
          iStack_3cc = 0x5ecac8;
          FUN_00878dfb();
        }
        iStack_3cc = unaff_EBP + -0x10;
        iStack_3d0 = 0x5ecadb;
        FUN_0041141a();
        FUN_004125e6();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iStack_3cc = 0x5ecaf0;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_3cc = 0x5ecafb;
          FUN_00878dfb();
        }
      }
      if (*(int *)(extraout_ECX + 0xec) != 0) {
        iStack_3cc = 0xfffffffe;
        iStack_3d0 = 0x5ecb15;
        FUN_004031b7();
        iVar3 = *(int *)(extraout_ECX + 0xec);
        *(undefined4 *)(unaff_EBP + -4) = 3;
        if (iVar3 == 0) {
          iStack_3cc = 0x5ecb2a;
          FUN_00878dfb();
        }
        iStack_3cc = unaff_EBP + -0x10;
        iStack_3d0 = 0x5ecb39;
        FUN_0041141a();
        FUN_004125e6();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iStack_3cc = 0x5ecb4e;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_3cc = 0x5ecb59;
          FUN_00878dfb();
        }
      }
      if (*(int *)(extraout_ECX + 0xf0) != 0) {
        iStack_3cc = 0xfffffffe;
        iStack_3d0 = 0x5ecb73;
        FUN_004031b7();
        iVar3 = *(int *)(extraout_ECX + 0xf0);
        *(undefined4 *)(unaff_EBP + -4) = 4;
        if (iVar3 == 0) {
          iStack_3cc = 0x5ecb88;
          FUN_00878dfb();
        }
        iStack_3cc = unaff_EBP + -0x10;
        iStack_3d0 = 0x5ecb97;
        FUN_0041141a();
        FUN_004125e6();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iStack_3cc = 0x5ecbac;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_3cc = 0x5ecbb7;
          FUN_00878dfb();
        }
      }
      FUN_004497c2();
      FUN_004497c2();
      if (*(int *)(*(int *)(unaff_EBP + -0x2c) + 8) != 0) {
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        iStack_3cc = unaff_EBP + -0x18;
        *(undefined4 *)(unaff_EBP + -4) = 5;
        iStack_3d0 = 0x5ecbf8;
        piVar4 = (int *)FUN_00679d86();
        iStack_3d4 = *piVar4;
        iStack_3cc = unaff_EBP + -0x10;
        *(undefined1 *)(unaff_EBP + -4) = 6;
        iStack_3d0 = 0x5ecc07;
        FUN_0041354c();
        *(undefined1 *)(unaff_EBP + -4) = 5;
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          iStack_3d4 = *(int *)(unaff_EBP + -0x18) + -0xc;
          iStack_3cc = 0x5ecc1d;
          FUN_00403384();
        }
        iStack_3cc = 0xff;
        iStack_3d0 = 0;
        *(int **)(unaff_EBP + -0x30) = &iStack_3d4;
        iStack_3dc = 0x5ecc31;
        piStack_3d8 = (int *)(extraout_ECX + 0xf0);
        FUN_0041160e();
        iStack_3e0 = *(int *)(*(int *)(extraout_ECX + 0x98) + 0x50) + 0x5a;
        iStack_3dc = *(int *)(*(int *)(extraout_ECX + 0x98) + 0x4c);
        *(int **)(unaff_EBP + -0x34) = &iStack_3e0;
        piStack_3d8 = (int *)iStack_3e0;
        FUN_00433bdf(extraout_ECX + 0x80);
        *(undefined1 *)(unaff_EBP + -4) = 5;
        uVar5 = FUN_00411641(0);
        puVar6 = (undefined4 *)FUN_0042e3f0(unaff_EBP + -0x18,uVar5);
        iStack_3cc = 0x5ecc7c;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xec),
                   (IBinding *)*puVar6);
        FUN_00412600();
        iStack_3cc = 0x5ecc92;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        iStack_3cc = 0x5ecc9f;
        FUN_00403191();
        iVar3 = *(int *)(extraout_ECX + 0xec);
        *(undefined1 *)(unaff_EBP + -4) = 10;
        if (iVar3 == 0) {
          iStack_3cc = 0x5eccb2;
          FUN_00878dfb();
        }
        piVar4 = *(int **)(extraout_ECX + 0xec);
        iStack_3d4 = *(int *)(unaff_EBP + -0x44);
        iStack_3d0 = *(int *)(unaff_EBP + -0x40);
        iVar3 = *piVar4;
        iStack_3cc = *(undefined4 *)(unaff_EBP + -0x3c);
        iStack_3e0 = *(int *)(unaff_EBP + -0x24);
        iStack_3dc = *(int *)(unaff_EBP + -0x20);
        *(int **)(unaff_EBP + -0x18) = piVar4;
        piStack_3d8 = *(int **)(unaff_EBP + -0x1c);
        iVar3 = (**(code **)(iVar3 + 0x110))(piVar4,0,*(undefined4 *)(unaff_EBP + -0x28));
        if (iVar3 < 0) {
          iStack_3cc = *(undefined4 *)(unaff_EBP + -0x18);
          iStack_3d4 = 0x5eccf0;
          iStack_3d0 = iVar3;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 9;
        iStack_3cc = 0x5eccfd;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_3cc = 0x5ecd08;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 5;
        iStack_3cc = 0x5ecd15;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_3cc = 0x5ecd20;
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x10) != 0) {
          iStack_3cc = 0x5ecd34;
          FUN_00403384();
        }
      }
      iVar3 = *(int *)(unaff_EBP + -0x2c);
      *(undefined4 *)(iVar3 + 4) = 0;
      *(undefined4 *)(iVar3 + 8) = 0;
      DVar7 = timeGetTime();
      *(DWORD *)(extraout_ECX + 0x118) = DVar7;
    }
    if (*(int *)(extraout_ECX + 0x118) != 0) {
      DVar7 = timeGetTime();
      if (0x11 < DVar7 - *(int *)(extraout_ECX + 0x118)) {
        iStack_3cc = 0x5ecd7e;
        FUN_005ed259();
        *(undefined4 *)(unaff_EBP + -4) = 0xb;
        iStack_3cc = 0x5ecd94;
        FUN_005ed274();
        iStack_3cc = 100;
        iStack_3dc = *(int *)(*(int *)(extraout_ECX + 0x98) + 0x50) + 0x4d;
        iStack_3d4 = *(int *)(*(int *)(extraout_ECX + 0x98) + 0x4c) + 0x1c;
        piStack_3d8 = (int *)0xe;
        *(int **)(unaff_EBP + -0x34) = &iStack_3dc;
        iStack_3e0 = extraout_ECX + 0xe4;
        iStack_3d0 = iStack_3dc;
        FUN_0041160e();
        *(int **)(unaff_EBP + -0x30) = &iStack_3e0;
        FUN_00433bdf(extraout_ECX + 0x80);
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        uVar5 = FUN_0044972c(2,0);
        iVar3 = unaff_EBP + -0x214;
        FUN_00449780(iVar3,uVar5);
        FUN_0043f082(iVar3,uVar5);
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          iStack_3cc = 100;
          iStack_3dc = *(int *)(*(int *)(extraout_ECX + 0x98) + 0x50) + 0x4d;
          iStack_3d4 = *(int *)(*(int *)(extraout_ECX + 0x98) + 0x4c) + 0xd5;
          piStack_3d8 = (int *)0xe;
          *(int **)(unaff_EBP + -0x34) = &iStack_3dc;
          iStack_3e0 = extraout_ECX + 0xe4;
          iStack_3d0 = iStack_3dc;
          FUN_0041160e();
          *(int **)(unaff_EBP + -0x30) = &iStack_3e0;
          FUN_00433bdf(extraout_ECX + 0x80);
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          uVar5 = FUN_0044972c(2,1);
          iVar3 = unaff_EBP + -0x3c4;
          FUN_00449780(iVar3,uVar5);
          FUN_0043f082(iVar3,uVar5);
        }
        FUN_005ed292();
        *(undefined4 *)(extraout_ECX + 0x118) = 0;
      }
    }
    goto LAB_005ed24a;
  }
  if (piVar4[1] == 0) goto LAB_005ed24a;
  if (*(int *)(extraout_ECX + 0x10c) != 0) {
    iStack_3cc = 0x5ece91;
    FUN_00449941();
    *(undefined4 *)(extraout_ECX + 0x10c) = 0;
  }
  if (*(int *)(extraout_ECX + 0x114) != 0) {
    iStack_3cc = 0x5eceaa;
    FUN_00449941();
    *(undefined4 *)(extraout_ECX + 0x114) = 0;
  }
  if (*(int *)(extraout_ECX + 0xe4) != 0) {
    iStack_3cc = 0xfffffffe;
    iStack_3d0 = 0x5ecec1;
    FUN_004031b7();
    iVar3 = *(int *)(extraout_ECX + 0xe4);
    *(undefined4 *)(unaff_EBP + -4) = 0x11;
    if (iVar3 == 0) {
      iStack_3cc = 0x5eceda;
      FUN_00878dfb();
    }
    iStack_3cc = unaff_EBP + -0x14;
    iStack_3d0 = 0x5eceed;
    FUN_0041141a();
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      iStack_3cc = 0x5ecefa;
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_3cc = 0x5ecf07;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_3cc = 0x5ecf12;
      FUN_00878dfb();
    }
  }
  iVar3 = *(int *)(extraout_ECX + 0xec);
  piVar4 = (int *)(extraout_ECX + 0xec);
  *(int **)(unaff_EBP + -0x30) = piVar4;
  if (iVar3 != 0) {
    iStack_3cc = 0xfffffffe;
    iStack_3d0 = 0x5ecf2f;
    FUN_004031b7();
    iVar3 = *piVar4;
    *(undefined4 *)(unaff_EBP + -4) = 0x12;
    if (iVar3 == 0) {
      iStack_3cc = 0x5ecf44;
      FUN_00878dfb();
    }
    iStack_3cc = unaff_EBP + -0x14;
    iStack_3d0 = 0x5ecf53;
    FUN_0041141a();
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      iStack_3cc = 0x5ecf60;
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_3cc = 0x5ecf6d;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_3cc = 0x5ecf78;
      FUN_00878dfb();
    }
  }
  if (*(int *)(extraout_ECX + 0xf0) != 0) {
    iStack_3cc = 0xfffffffe;
    iStack_3d0 = 0x5ecf8c;
    FUN_004031b7();
    iVar3 = *(int *)(extraout_ECX + 0xf0);
    *(undefined4 *)(unaff_EBP + -4) = 0x13;
    if (iVar3 == 0) {
      iStack_3cc = 0x5ecfa5;
      FUN_00878dfb();
    }
    iStack_3cc = unaff_EBP + -0x14;
    iStack_3d0 = 0x5ecfb8;
    FUN_0041141a();
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      iStack_3cc = 0x5ecfc5;
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_3cc = 0x5ecfd2;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_3cc = 0x5ecfdd;
      FUN_00878dfb();
    }
  }
  cVar1 = *(char *)(*(int *)(unaff_EBP + -0x2c) + 0x3ac);
  if (cVar1 == '\x01') {
    if (*(int *)(extraout_ECX + 0xf4) != 0) {
      iStack_3cc = 0xfffffffe;
      iStack_3d0 = 0x5ed05f;
      FUN_004031b7();
      iVar3 = *(int *)(extraout_ECX + 0xf4);
      *(undefined4 *)(unaff_EBP + -4) = 0x14;
      if (iVar3 == 0) {
        iStack_3cc = 0x5ed078;
        FUN_00878dfb();
      }
      iStack_3cc = unaff_EBP + -0x10;
      iStack_3d0 = 0x5ed08b;
      FUN_0041141a();
      if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
        iStack_3cc = 0x5ed098;
        (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      goto LAB_005ed09f;
    }
  }
  else if ((cVar1 == '\x02') && (*(int *)(extraout_ECX + 0xf8) != 0)) {
    iStack_3cc = 0xfffffffe;
    iStack_3d0 = 0x5ed009;
    FUN_004031b7();
    iVar3 = *(int *)(extraout_ECX + 0xf8);
    *(undefined4 *)(unaff_EBP + -4) = 0x15;
    if (iVar3 == 0) {
      iStack_3cc = 0x5ed022;
      FUN_00878dfb();
    }
    iStack_3cc = unaff_EBP + -0x14;
    iStack_3d0 = 0x5ed035;
    FUN_0041141a();
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      iStack_3cc = 0x5ed042;
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_005ed09f:
    iStack_3cc = 0x5ed0a5;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_3cc = 0x5ed0b0;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  iStack_3cc = unaff_EBP + -0x14;
  *(undefined4 *)(unaff_EBP + -4) = 0x16;
  iStack_3d0 = 0x5ed0cd;
  FUN_00679d86();
  iStack_3cc = unaff_EBP + -0x18;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iStack_3d0 = 0x5ed0dc;
  FUN_0041354c();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_00402676();
  iStack_3cc = 0xff;
  iStack_3d0 = 0;
  piStack_3d8 = (int *)(extraout_ECX + 0xf0);
  *(int **)(unaff_EBP + -0x34) = &iStack_3d4;
  iStack_3dc = 0x5ed103;
  FUN_0041160e();
  iStack_3e0 = *(int *)(*(int *)(extraout_ECX + 0x98) + 0x50) + 0x5a;
  iStack_3dc = *(int *)(*(int *)(extraout_ECX + 0x98) + 0x4c);
  *(int **)(unaff_EBP + -0x10) = &iStack_3e0;
  piStack_3d8 = (int *)iStack_3e0;
  FUN_00433bdf(extraout_ECX + 0x80);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  uVar5 = FUN_00411641(0);
  piVar8 = (int *)FUN_0042e3f0(unaff_EBP + -0x14,uVar5);
  piVar8 = (int *)*piVar8;
  piVar2 = (int *)*piVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  if (piVar2 != piVar8) {
    *piVar4 = (int)piVar8;
    FUN_00424ed4();
    if (piVar2 != (int *)0x0) {
      iStack_3cc = 0x5ed15e;
      (**(code **)(*piVar2 + 8))();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    iStack_3cc = 0x5ed16f;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  iStack_3cc = 0x5ed17b;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
  iStack_3cc = unaff_EBP + -0x44;
  iStack_3d0 = 0x5ed18a;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_3cc = 0x5ed196;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_3cc = 0x5ed1a0;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
  iStack_3cc = unaff_EBP + -0x54;
  iStack_3d0 = 0x5ed1aa;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_3cc = 0x5ed1b6;
    FUN_00878dfb();
  }
  piVar4 = *(int **)(unaff_EBP + -0x30);
  iVar3 = *piVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  if (iVar3 == 0) {
    iStack_3cc = 0x5ed1cb;
    FUN_00878dfb();
  }
  piVar4 = (int *)*piVar4;
  iStack_3d4 = *(int *)(unaff_EBP + -0x44);
  iStack_3d0 = *(undefined4 *)(unaff_EBP + -0x40);
  iStack_3cc = *(undefined4 *)(unaff_EBP + -0x3c);
  iStack_3e0 = *(int *)(unaff_EBP + -0x50);
  iStack_3dc = *(int *)(unaff_EBP + -0x4c);
  piStack_3d8 = *(int **)(unaff_EBP + -0x48);
  iVar3 = (**(code **)(*piVar4 + 0x110))(piVar4,0,*(undefined4 *)(unaff_EBP + -0x54));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar4,&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x54);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x44);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  iVar3 = *(int *)(unaff_EBP + -0x2c);
  *(undefined4 *)(iVar3 + 4) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(iVar3 + 8) = 1;
  FUN_00402676();
LAB_005ed24a:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


