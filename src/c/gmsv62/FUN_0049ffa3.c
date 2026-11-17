/* FUN_0049ffa3 - 0x0049ffa3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0049ffa3(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int unaff_EBP;
  undefined4 uVar7;
  undefined4 uStack_110;
  int iStack_10c;
  int *piStack_108;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x2c) = extraout_ECX;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb();
  }
  uVar1 = FUN_0040e48b();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar1;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb();
  }
  FUN_0040e53d();
  iVar2 = *(int *)(extraout_ECX + 0x88);
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX + 0x88;
  if (iVar2 == 0) {
    FUN_00878dfb();
  }
  iVar2 = FUN_004a2734();
  piVar5 = *(int **)(unaff_EBP + -0x10);
  if (piVar5 == (int *)0x0) {
    FUN_00878dfb();
    piVar5 = *(int **)(unaff_EBP + -0x10);
  }
  iVar3 = *piVar5;
  *(int **)(unaff_EBP + -0x24) = piVar5;
  iVar3 = (**(code **)(iVar3 + 0x8c))();
  if (iVar3 < 0) {
    FUN_00878e09();
  }
  piVar5 = *(int **)(unaff_EBP + -0x10);
  if (*(int *)(extraout_ECX + 100) == 0) {
    if (piVar5 == (int *)0x0) {
      FUN_00878dfb();
      piVar5 = *(int **)(unaff_EBP + -0x10);
    }
    iVar3 = *piVar5;
    *(int **)(unaff_EBP + -0x30) = piVar5;
    iVar3 = (**(code **)(iVar3 + 0x8c))();
    if (iVar3 < 0) {
      piStack_108 = *(int **)(unaff_EBP + -0x30);
      uStack_110 = 0x4a0478;
      iStack_10c = iVar3;
      FUN_00878e09();
    }
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    iVar3 = *(int *)(extraout_ECX + 0x74);
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    *(undefined4 *)(unaff_EBP + -0x2c) = 3;
    if (iVar3 != 0) {
      *(int *)(unaff_EBP + -0x38) = iVar2 * 2 + 6;
      *(int *)(unaff_EBP + -0x34) = iVar2 + 2;
      *(int *)(unaff_EBP + -0x24) = iVar2 + 4;
      while( true ) {
        *(int *)(unaff_EBP + -0x28) = iVar3;
        iVar2 = *(int *)((-(uint)(iVar3 != 0) & iVar3 - 0x10U) + 4);
        *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
        piStack_108 = (int *)(unaff_EBP + -0x30);
        *(uint *)(unaff_EBP + -0x18) = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
        iStack_10c = 0x4a04e8;
        puVar4 = (undefined4 *)FUN_00679d22();
        piStack_108 = (int *)*puVar4;
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        iStack_10c = unaff_EBP + -0x14;
        uStack_110 = 0x4a04fb;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        FUN_00414ebb();
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          piStack_108 = (int *)0x4a051a;
          FUN_00878dfb();
        }
        piVar5 = *(int **)(unaff_EBP + -0x10);
        iVar2 = *(int *)(unaff_EBP + -0x2c);
        piStack_108 = *(int **)(unaff_EBP + -0x24);
        iStack_10c = *(int *)(unaff_EBP + -0x38);
        uStack_110 = 3;
        iVar3 = (**(code **)(*piVar5 + 0x8c))(piVar5,iVar2);
        if (iVar3 < 0) {
          FUN_00878e09(iVar3,piVar5,&DAT_00963cc8);
        }
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar5 = *(int **)(unaff_EBP + -0x10);
        iVar3 = (**(code **)(*piVar5 + 0x8c))
                          (piVar5,iVar2 + 1,4,*(int *)(unaff_EBP + -0x34) * 2,
                           *(int *)(unaff_EBP + -0x34),0xffffffff);
        if (iVar3 < 0) {
          uStack_110 = 0x4a0582;
          iStack_10c = iVar3;
          piStack_108 = piVar5;
          FUN_00878e09();
        }
        piStack_108 = (int *)0x4a058e;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x68));
        piStack_108 = (int *)(unaff_EBP + -0x68);
        iStack_10c = 0x4a0598;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          piStack_108 = (int *)0x4a05a4;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        piStack_108 = (int *)0x4a05ae;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
        piStack_108 = (int *)(unaff_EBP + -0x58);
        iStack_10c = 0x4a05b8;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          piStack_108 = (int *)0x4a05c4;
          FUN_00878dfb();
        }
        piStack_108 = (int *)(unaff_EBP + -0x58);
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        iStack_10c = 0x4a05d8;
        iStack_10c = FUN_00449749();
        uStack_110 = 0x4a05e1;
        uVar1 = FUN_00449713();
        *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_110;
        FUN_00448a17(uVar1);
        uVar1 = 5;
        iVar3 = iVar2 + 2;
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        FUN_004115d9(iVar3,5);
        FUN_00448e3a(iVar3,uVar1);
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        piStack_108 = (int *)0x4a0613;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          piStack_108 = (int *)0x4a061e;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        piStack_108 = (int *)0x4a062b;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          piStack_108 = (int *)0x4a0636;
          FUN_00878dfb();
        }
        piStack_108 = (int *)0x4a063c;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x78));
        piStack_108 = (int *)(unaff_EBP + -0x78);
        iStack_10c = 0x4a0646;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          piStack_108 = (int *)0x4a0652;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        piStack_108 = (int *)0x4a065c;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
        piStack_108 = (int *)(unaff_EBP + -0x48);
        iStack_10c = 0x4a0666;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          piStack_108 = (int *)0x4a0672;
          FUN_00878dfb();
        }
        piStack_108 = (int *)(unaff_EBP + -0x48);
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        iStack_10c = 0x4a0686;
        iStack_10c = FUN_00449749();
        uStack_110 = 0x4a068f;
        uVar1 = FUN_00449713();
        *(undefined4 **)(unaff_EBP + -0x28) = &uStack_110;
        uStack_110 = extraout_ECX_02;
        FUN_00448a17(uVar1);
        iVar6 = *(int *)(unaff_EBP + -0x24);
        uVar1 = 5;
        iVar3 = iVar6 + iVar2;
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        FUN_004115d9(iVar3,5);
        FUN_00448e3a(iVar3,uVar1);
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        piStack_108 = (int *)0x4a06c4;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          piStack_108 = (int *)0x4a06cf;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        piStack_108 = (int *)0x4a06dc;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          piStack_108 = (int *)0x4a06e7;
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + -0x2c) = iVar2 + iVar6 * 2;
        if (*(int *)(unaff_EBP + -0x18) == 0) break;
        iVar3 = *(int *)(unaff_EBP + -0x18);
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else {
    if (piVar5 == (int *)0x0) {
      FUN_00878dfb();
      piVar5 = *(int **)(unaff_EBP + -0x10);
    }
    iVar3 = *piVar5;
    *(int **)(unaff_EBP + -0x1c) = piVar5;
    iVar3 = (**(code **)(iVar3 + 0x8c))();
    if (iVar3 < 0) {
      FUN_00878e09();
    }
    piVar5 = *(int **)(unaff_EBP + -0x10);
    if (piVar5 == (int *)0x0) {
      FUN_00878dfb();
      piVar5 = *(int **)(unaff_EBP + -0x10);
    }
    iVar3 = *piVar5;
    *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + -0x18) - iVar2;
    *(int **)(unaff_EBP + -0x1c) = piVar5;
    iVar3 = (**(code **)(iVar3 + 0x8c))();
    if (iVar3 < 0) {
      piStack_108 = *(int **)(unaff_EBP + -0x1c);
      uStack_110 = 0x4a00f4;
      iStack_10c = iVar3;
      FUN_00878e09();
    }
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    iVar3 = *(int *)(extraout_ECX + 0x74);
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    *(undefined4 *)(unaff_EBP + -0x14) = 2;
    iVar6 = extraout_ECX;
    if (iVar3 != 0) {
      while( true ) {
        *(int *)(unaff_EBP + -0x24) = iVar3;
        iVar3 = *(int *)((-(uint)(iVar3 != 0) & iVar3 - 0x10U) + 4);
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
        piStack_108 = (int *)(unaff_EBP + -0x34);
        *(uint *)(unaff_EBP + -0x1c) = -(uint)(iVar3 != 0) & iVar3 + 0x10U;
        iStack_10c = 0x4a0154;
        puVar4 = (undefined4 *)FUN_00679d22();
        piStack_108 = (int *)*puVar4;
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iStack_10c = unaff_EBP + -0x20;
        uStack_110 = 0x4a0167;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (*(int *)(unaff_EBP + -0x34) != 0) {
          piStack_108 = (int *)0x4a017e;
          FUN_00434e38();
        }
        if (*(int *)(iVar6 + 0x84) == *(int *)(unaff_EBP + -0x18) + -1 + *(int *)(iVar6 + 0x7c)) {
          piStack_108 = (int *)0x4a019e;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 3;
          piStack_108 = (int *)0x4a01ab;
          FUN_00403191();
          piStack_108 = (int *)(unaff_EBP + -0x78);
          *(undefined1 *)(unaff_EBP + -4) = 4;
          iStack_10c = 0x4a01c2;
          iStack_10c = FUN_00449749();
          uStack_110 = 0x4a01cb;
          uVar1 = FUN_00449713();
          *(undefined4 **)(unaff_EBP + -0x28) = &uStack_110;
          FUN_00448a17(uVar1);
          uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
          uVar7 = 2;
          *(undefined1 *)(unaff_EBP + -4) = 4;
          FUN_004115d9(2,uVar1);
          FUN_00448e3a(uVar7,uVar1);
          *(undefined1 *)(unaff_EBP + -4) = 3;
          piStack_108 = (int *)0x4a01fc;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_108 = (int *)0x4a0207;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 1;
          piStack_108 = (int *)0x4a0214;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_108 = (int *)0x4a021f;
            FUN_00878dfb();
          }
          piVar5 = *(int **)(unaff_EBP + -0x10);
          if (piVar5 == (int *)0x0) {
            piStack_108 = (int *)0x4a0230;
            FUN_00878dfb();
            piVar5 = *(int **)(unaff_EBP + -0x10);
          }
          iVar6 = *piVar5;
          iStack_10c = *(int *)(unaff_EBP + -0x38) + -7;
          uStack_110 = *(undefined4 *)(unaff_EBP + -0x14);
          iVar3 = iVar2 + 5;
          *(int **)(unaff_EBP + -0x30) = piVar5;
          piStack_108 = (int *)iVar2;
          iVar6 = (**(code **)(iVar6 + 0x8c))(piVar5,iVar3);
          if (iVar6 < 0) {
            piStack_108 = *(int **)(unaff_EBP + -0x30);
            uStack_110 = 0x4a0265;
            iStack_10c = iVar6;
            FUN_00878e09();
          }
          piStack_108 = (int *)0x4a026e;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 6;
          piStack_108 = (int *)0x4a027b;
          FUN_00403191();
          piStack_108 = (int *)(unaff_EBP + -0x68);
          *(undefined1 *)(unaff_EBP + -4) = 7;
          iStack_10c = 0x4a0295;
          iStack_10c = FUN_00449749();
          uStack_110 = 0x4a029e;
          uVar1 = FUN_00449713();
          *(undefined4 **)(unaff_EBP + -0x28) = &uStack_110;
          uStack_110 = extraout_ECX_00;
          FUN_00448a17(uVar1);
          uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
          *(undefined1 *)(unaff_EBP + -4) = 7;
          FUN_004115d9(iVar3,uVar1);
          FUN_00448e3a(iVar3,uVar1);
          *(undefined1 *)(unaff_EBP + -4) = 6;
          piStack_108 = (int *)0x4a02ce;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_108 = (int *)0x4a02d9;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 1;
        }
        else {
          piStack_108 = (int *)0x4a02f0;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 9;
          piStack_108 = (int *)0x4a0300;
          FUN_00403191();
          piStack_108 = (int *)(unaff_EBP + -0x88);
          *(undefined1 *)(unaff_EBP + -4) = 10;
          iStack_10c = 0x4a031f;
          iStack_10c = FUN_00449749();
          uStack_110 = 0x4a0328;
          uVar1 = FUN_00449713();
          *(undefined4 **)(unaff_EBP + -0x28) = &uStack_110;
          FUN_00448a17(uVar1);
          uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
          uVar7 = 2;
          *(undefined1 *)(unaff_EBP + -4) = 10;
          FUN_004115d9(2,uVar1);
          FUN_00448e3a(uVar7,uVar1);
          *(undefined1 *)(unaff_EBP + -4) = 9;
          piStack_108 = (int *)0x4a035c;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_108 = (int *)0x4a0367;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 1;
          piStack_108 = (int *)0x4a0377;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_108 = (int *)0x4a0382;
            FUN_00878dfb();
          }
          piStack_108 = (int *)0x4a038e;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          piStack_108 = (int *)0x4a039e;
          FUN_00403191();
          piStack_108 = (int *)(unaff_EBP + -0x98);
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          iStack_10c = 0x4a03b7;
          iStack_10c = FUN_00449749();
          uStack_110 = 0x4a03c0;
          uVar1 = FUN_00449713();
          *(undefined4 **)(unaff_EBP + -0x28) = &uStack_110;
          uStack_110 = extraout_ECX_01;
          FUN_00448a17(uVar1);
          uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
          iVar3 = iVar2 + 5;
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          FUN_004115d9(iVar3,uVar1);
          FUN_00448e3a(iVar3,uVar1);
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          piStack_108 = (int *)0x4a03f6;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_108 = (int *)0x4a0401;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 1;
        }
        piStack_108 = (int *)0x4a0411;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          piStack_108 = (int *)0x4a041c;
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + iVar2 + 1;
        if (*(int *)(unaff_EBP + -0x1c) == 0) break;
        iVar3 = *(int *)(unaff_EBP + -0x1c);
        iVar6 = *(int *)(unaff_EBP + -0x2c);
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    piStack_108 = (int *)0x4a0715;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


