/* ptr_0049ffe8 - 0x0049ffe8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0049ffe8(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int unaff_EBX;
  int unaff_EBP;
  undefined4 uVar7;
  undefined4 uStack_58;
  int iStack_54;
  int *piStack_50;
  
  FUN_00878dfb();
  FUN_0040e53d();
  iVar1 = *(int *)(unaff_EBX + 0x88);
  *(int *)(unaff_EBP + -0x1c) = unaff_EBX + 0x88;
  if (iVar1 == 0) {
    FUN_00878dfb();
  }
  iVar1 = FUN_004a2734();
  piVar5 = *(int **)(unaff_EBP + -0x10);
  if (piVar5 == (int *)0x0) {
    FUN_00878dfb();
    piVar5 = *(int **)(unaff_EBP + -0x10);
  }
  iVar2 = *piVar5;
  *(int **)(unaff_EBP + -0x24) = piVar5;
  iVar2 = (**(code **)(iVar2 + 0x8c))();
  if (iVar2 < 0) {
    FUN_00878e09();
  }
  piVar5 = *(int **)(unaff_EBP + -0x10);
  if (*(int *)(unaff_EBX + 100) == 0) {
    if (piVar5 == (int *)0x0) {
      FUN_00878dfb();
      piVar5 = *(int **)(unaff_EBP + -0x10);
    }
    iVar2 = *piVar5;
    *(int **)(unaff_EBP + -0x30) = piVar5;
    iVar2 = (**(code **)(iVar2 + 0x8c))();
    if (iVar2 < 0) {
      piStack_50 = *(int **)(unaff_EBP + -0x30);
      uStack_58 = 0x4a0478;
      iStack_54 = iVar2;
      FUN_00878e09();
    }
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    iVar2 = *(int *)(unaff_EBX + 0x74);
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    *(undefined4 *)(unaff_EBP + -0x2c) = 3;
    if (iVar2 != 0) {
      *(int *)(unaff_EBP + -0x38) = iVar1 * 2 + 6;
      *(int *)(unaff_EBP + -0x34) = iVar1 + 2;
      *(int *)(unaff_EBP + -0x24) = iVar1 + 4;
      while( true ) {
        *(int *)(unaff_EBP + -0x28) = iVar2;
        iVar1 = *(int *)((-(uint)(iVar2 != 0) & iVar2 - 0x10U) + 4);
        *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
        piStack_50 = (int *)(unaff_EBP + -0x30);
        *(uint *)(unaff_EBP + -0x18) = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
        iStack_54 = 0x4a04e8;
        puVar3 = (undefined4 *)FUN_00679d22();
        piStack_50 = (int *)*puVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        iStack_54 = unaff_EBP + -0x14;
        uStack_58 = 0x4a04fb;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        FUN_00414ebb();
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          piStack_50 = (int *)0x4a051a;
          FUN_00878dfb();
        }
        piVar5 = *(int **)(unaff_EBP + -0x10);
        iVar1 = *(int *)(unaff_EBP + -0x2c);
        piStack_50 = *(int **)(unaff_EBP + -0x24);
        iStack_54 = *(int *)(unaff_EBP + -0x38);
        uStack_58 = 3;
        iVar2 = (**(code **)(*piVar5 + 0x8c))(piVar5,iVar1);
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,piVar5,&DAT_00963cc8);
        }
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar5 = *(int **)(unaff_EBP + -0x10);
        iVar2 = (**(code **)(*piVar5 + 0x8c))
                          (piVar5,iVar1 + 1,4,*(int *)(unaff_EBP + -0x34) * 2,
                           *(int *)(unaff_EBP + -0x34),0xffffffff);
        if (iVar2 < 0) {
          uStack_58 = 0x4a0582;
          iStack_54 = iVar2;
          piStack_50 = piVar5;
          FUN_00878e09();
        }
        piStack_50 = (int *)0x4a058e;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x68));
        piStack_50 = (int *)(unaff_EBP + -0x68);
        iStack_54 = 0x4a0598;
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          piStack_50 = (int *)0x4a05a4;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        piStack_50 = (int *)0x4a05ae;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
        piStack_50 = (int *)(unaff_EBP + -0x58);
        iStack_54 = 0x4a05b8;
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          piStack_50 = (int *)0x4a05c4;
          FUN_00878dfb();
        }
        piStack_50 = (int *)(unaff_EBP + -0x58);
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        iStack_54 = 0x4a05d8;
        iStack_54 = FUN_00449749();
        uStack_58 = 0x4a05e1;
        uVar4 = FUN_00449713();
        *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_58;
        FUN_00448a17(uVar4);
        uVar4 = 5;
        iVar2 = iVar1 + 2;
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        FUN_004115d9(iVar2,5);
        FUN_00448e3a(iVar2,uVar4);
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        piStack_50 = (int *)0x4a0613;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          piStack_50 = (int *)0x4a061e;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        piStack_50 = (int *)0x4a062b;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          piStack_50 = (int *)0x4a0636;
          FUN_00878dfb();
        }
        piStack_50 = (int *)0x4a063c;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x78));
        piStack_50 = (int *)(unaff_EBP + -0x78);
        iStack_54 = 0x4a0646;
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          piStack_50 = (int *)0x4a0652;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        piStack_50 = (int *)0x4a065c;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
        piStack_50 = (int *)(unaff_EBP + -0x48);
        iStack_54 = 0x4a0666;
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          piStack_50 = (int *)0x4a0672;
          FUN_00878dfb();
        }
        piStack_50 = (int *)(unaff_EBP + -0x48);
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        iStack_54 = 0x4a0686;
        iStack_54 = FUN_00449749();
        uStack_58 = 0x4a068f;
        uVar4 = FUN_00449713();
        *(undefined4 **)(unaff_EBP + -0x28) = &uStack_58;
        uStack_58 = extraout_ECX_01;
        FUN_00448a17(uVar4);
        iVar6 = *(int *)(unaff_EBP + -0x24);
        uVar4 = 5;
        iVar2 = iVar6 + iVar1;
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        FUN_004115d9(iVar2,5);
        FUN_00448e3a(iVar2,uVar4);
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        piStack_50 = (int *)0x4a06c4;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          piStack_50 = (int *)0x4a06cf;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        piStack_50 = (int *)0x4a06dc;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          piStack_50 = (int *)0x4a06e7;
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + -0x2c) = iVar1 + iVar6 * 2;
        if (*(int *)(unaff_EBP + -0x18) == 0) break;
        iVar2 = *(int *)(unaff_EBP + -0x18);
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else {
    if (piVar5 == (int *)0x0) {
      FUN_00878dfb();
      piVar5 = *(int **)(unaff_EBP + -0x10);
    }
    iVar2 = *piVar5;
    *(int **)(unaff_EBP + -0x1c) = piVar5;
    iVar2 = (**(code **)(iVar2 + 0x8c))();
    if (iVar2 < 0) {
      FUN_00878e09();
    }
    piVar5 = *(int **)(unaff_EBP + -0x10);
    if (piVar5 == (int *)0x0) {
      FUN_00878dfb();
      piVar5 = *(int **)(unaff_EBP + -0x10);
    }
    iVar2 = *piVar5;
    *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + -0x18) - iVar1;
    *(int **)(unaff_EBP + -0x1c) = piVar5;
    iVar2 = (**(code **)(iVar2 + 0x8c))();
    if (iVar2 < 0) {
      piStack_50 = *(int **)(unaff_EBP + -0x1c);
      uStack_58 = 0x4a00f4;
      iStack_54 = iVar2;
      FUN_00878e09();
    }
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    iVar2 = *(int *)(unaff_EBX + 0x74);
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    *(undefined4 *)(unaff_EBP + -0x14) = 2;
    if (iVar2 != 0) {
      while( true ) {
        *(int *)(unaff_EBP + -0x24) = iVar2;
        iVar2 = *(int *)((-(uint)(iVar2 != 0) & iVar2 - 0x10U) + 4);
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
        piStack_50 = (int *)(unaff_EBP + -0x34);
        *(uint *)(unaff_EBP + -0x1c) = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
        iStack_54 = 0x4a0154;
        puVar3 = (undefined4 *)FUN_00679d22();
        piStack_50 = (int *)*puVar3;
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iStack_54 = unaff_EBP + -0x20;
        uStack_58 = 0x4a0167;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (*(int *)(unaff_EBP + -0x34) != 0) {
          piStack_50 = (int *)0x4a017e;
          FUN_00434e38();
        }
        if (*(int *)(unaff_EBX + 0x84) ==
            *(int *)(unaff_EBP + -0x18) + -1 + *(int *)(unaff_EBX + 0x7c)) {
          piStack_50 = (int *)0x4a019e;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 3;
          piStack_50 = (int *)0x4a01ab;
          FUN_00403191();
          piStack_50 = (int *)(unaff_EBP + -0x78);
          *(undefined1 *)(unaff_EBP + -4) = 4;
          iStack_54 = 0x4a01c2;
          iStack_54 = FUN_00449749();
          uStack_58 = 0x4a01cb;
          uVar4 = FUN_00449713();
          *(undefined4 **)(unaff_EBP + -0x28) = &uStack_58;
          FUN_00448a17(uVar4);
          uVar4 = *(undefined4 *)(unaff_EBP + -0x14);
          uVar7 = 2;
          *(undefined1 *)(unaff_EBP + -4) = 4;
          FUN_004115d9(2,uVar4);
          FUN_00448e3a(uVar7,uVar4);
          *(undefined1 *)(unaff_EBP + -4) = 3;
          piStack_50 = (int *)0x4a01fc;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_50 = (int *)0x4a0207;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 1;
          piStack_50 = (int *)0x4a0214;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_50 = (int *)0x4a021f;
            FUN_00878dfb();
          }
          piVar5 = *(int **)(unaff_EBP + -0x10);
          if (piVar5 == (int *)0x0) {
            piStack_50 = (int *)0x4a0230;
            FUN_00878dfb();
            piVar5 = *(int **)(unaff_EBP + -0x10);
          }
          iVar6 = *piVar5;
          iStack_54 = *(int *)(unaff_EBP + -0x38) + -7;
          uStack_58 = *(undefined4 *)(unaff_EBP + -0x14);
          iVar2 = iVar1 + 5;
          *(int **)(unaff_EBP + -0x30) = piVar5;
          piStack_50 = (int *)iVar1;
          iVar6 = (**(code **)(iVar6 + 0x8c))(piVar5,iVar2);
          if (iVar6 < 0) {
            piStack_50 = *(int **)(unaff_EBP + -0x30);
            uStack_58 = 0x4a0265;
            iStack_54 = iVar6;
            FUN_00878e09();
          }
          piStack_50 = (int *)0x4a026e;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 6;
          piStack_50 = (int *)0x4a027b;
          FUN_00403191();
          piStack_50 = (int *)(unaff_EBP + -0x68);
          *(undefined1 *)(unaff_EBP + -4) = 7;
          iStack_54 = 0x4a0295;
          iStack_54 = FUN_00449749();
          uStack_58 = 0x4a029e;
          uVar4 = FUN_00449713();
          *(undefined4 **)(unaff_EBP + -0x28) = &uStack_58;
          uStack_58 = extraout_ECX;
          FUN_00448a17(uVar4);
          uVar4 = *(undefined4 *)(unaff_EBP + -0x14);
          *(undefined1 *)(unaff_EBP + -4) = 7;
          FUN_004115d9(iVar2,uVar4);
          FUN_00448e3a(iVar2,uVar4);
          *(undefined1 *)(unaff_EBP + -4) = 6;
          piStack_50 = (int *)0x4a02ce;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_50 = (int *)0x4a02d9;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 1;
        }
        else {
          piStack_50 = (int *)0x4a02f0;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 9;
          piStack_50 = (int *)0x4a0300;
          FUN_00403191();
          piStack_50 = (int *)(unaff_EBP + -0x88);
          *(undefined1 *)(unaff_EBP + -4) = 10;
          iStack_54 = 0x4a031f;
          iStack_54 = FUN_00449749();
          uStack_58 = 0x4a0328;
          uVar4 = FUN_00449713();
          *(undefined4 **)(unaff_EBP + -0x28) = &uStack_58;
          FUN_00448a17(uVar4);
          uVar4 = *(undefined4 *)(unaff_EBP + -0x14);
          uVar7 = 2;
          *(undefined1 *)(unaff_EBP + -4) = 10;
          FUN_004115d9(2,uVar4);
          FUN_00448e3a(uVar7,uVar4);
          *(undefined1 *)(unaff_EBP + -4) = 9;
          piStack_50 = (int *)0x4a035c;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_50 = (int *)0x4a0367;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 1;
          piStack_50 = (int *)0x4a0377;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_50 = (int *)0x4a0382;
            FUN_00878dfb();
          }
          piStack_50 = (int *)0x4a038e;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          piStack_50 = (int *)0x4a039e;
          FUN_00403191();
          piStack_50 = (int *)(unaff_EBP + -0x98);
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          iStack_54 = 0x4a03b7;
          iStack_54 = FUN_00449749();
          uStack_58 = 0x4a03c0;
          uVar4 = FUN_00449713();
          *(undefined4 **)(unaff_EBP + -0x28) = &uStack_58;
          uStack_58 = extraout_ECX_00;
          FUN_00448a17(uVar4);
          uVar4 = *(undefined4 *)(unaff_EBP + -0x14);
          iVar2 = iVar1 + 5;
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          FUN_004115d9(iVar2,uVar4);
          FUN_00448e3a(iVar2,uVar4);
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          piStack_50 = (int *)0x4a03f6;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_50 = (int *)0x4a0401;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 1;
        }
        piStack_50 = (int *)0x4a0411;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          piStack_50 = (int *)0x4a041c;
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + iVar1 + 1;
        if (*(int *)(unaff_EBP + -0x1c) == 0) break;
        iVar2 = *(int *)(unaff_EBP + -0x1c);
        unaff_EBX = *(int *)(unaff_EBP + -0x2c);
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    piStack_50 = (int *)0x4a0715;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


