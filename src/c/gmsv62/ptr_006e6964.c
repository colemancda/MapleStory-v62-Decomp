/* ptr_006e6964 - 0x006e6964 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006e6964(void)

{
  char *pcVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  undefined *puStack_90;
  int *piStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  int *piStack_74;
  undefined4 uStack_44;
  int iStack_40;
  undefined1 *puStack_3c;
  int iStack_38;
  int *piStack_30;
  undefined1 *puStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  int *piStack_18;
  
  iVar3 = (**(code **)(in_EAX + 0x70))();
  if (iVar3 < 0) {
    piStack_18 = (int *)0x6e6976;
    FUN_00878e09();
  }
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    FUN_00878dfb();
  }
  piVar6 = *(int **)(unaff_EBP + -0x18);
  iVar3 = (**(code **)(*piVar6 + 0x78))();
  if (iVar3 < 0) {
    iStack_20 = 0x6e699d;
    iStack_1c = iVar3;
    piStack_18 = piVar6;
    FUN_00878e09();
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    piStack_18 = (int *)0x6e719a;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    piStack_18 = (int *)0x6e71a7;
    FUN_00403191();
    piStack_18 = (int *)0x0;
    iStack_1c = unaff_EBP + -0x60;
    iStack_20 = unaff_EBP + -0x50;
    puStack_2c = (undefined1 *)&uStack_24;
    *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_24;
    iStack_28 = 0x9f0;
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    piStack_30 = (int *)0x6e71cd;
    FUN_00679e4e();
    iStack_28 = unaff_EBP + -0x140;
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    puStack_2c = (undefined1 *)0x6e71dd;
    FUN_00405a1d();
    puStack_2c = (undefined1 *)0x6e71e4;
    FUN_00402660();
    puStack_2c = (undefined1 *)0x6e71eb;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    iStack_1c = 0x6e71f6;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x90) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    if (iVar3 != 0) {
      piStack_18 = (int *)0x6e7212;
      iVar3 = FUN_0041a581();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        piStack_18 = (int *)0x6e7223;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    piStack_18 = (int *)0x6e7233;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_18 = (int *)0x6e723e;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    piStack_18 = (int *)0x6e724b;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_18 = (int *)0x6e7256;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    piStack_18 = (int *)0x6e7263;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_18 = (int *)0x6e726e;
      FUN_00878dfb();
    }
    piStack_18 = (int *)0x6e7277;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    if (*(int *)(unaff_EBP + -0x1c) == 0) {
      piStack_18 = (int *)0x6e728b;
      FUN_00878dfb();
      if (*(int *)(unaff_EBP + -0x1c) == 0) {
        piStack_18 = (int *)0x6e7296;
        FUN_00878dfb();
      }
    }
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x1c);
    if (*(int *)(unaff_EBP + -0x1c) == 0) {
      piStack_18 = (int *)0x6e72a6;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x1c);
    if (*(int *)(unaff_EBP + -0x1c) == 0) {
      piStack_18 = (int *)0x6e72b6;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x1c);
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      piStack_18 = (int *)0x6e72c8;
      FUN_00878dfb();
    }
    piVar6 = *(int **)(unaff_EBP + -0x18);
    *(int **)(unaff_EBP + -0x24) = piVar6;
    iVar3 = FUN_0040e53d();
    *(int *)(unaff_EBP + -0x34) = iVar3 + -0x17;
    uVar7 = FUN_0040e48b();
    *(undefined4 *)(unaff_EBP + -0x28) = uVar7;
    iVar3 = FUN_0040e53d();
    *(int *)(unaff_EBP + -0x10) = iVar3 + -0x17;
    iStack_38 = FUN_0040e48b();
    uStack_24 = *(undefined4 *)(unaff_EBP + -0x34);
    iStack_28 = *(undefined4 *)(unaff_EBP + -0x28);
    iStack_20 = *(undefined4 *)(unaff_EBP + -0x74);
    puStack_2c = (undefined1 *)0x17;
    piStack_30 = (int *)0x0;
    iStack_1c = *(undefined4 *)(unaff_EBP + -0x70);
    puStack_3c = (undefined1 *)0xffffffff;
    iStack_40 = *(int *)(unaff_EBP + -0x40);
    piStack_18 = *(int **)(unaff_EBP + -0x6c);
    uStack_44 = 0x17;
    puVar4 = (undefined1 *)(**(code **)(*piVar6 + 0x84))();
    if ((int)puVar4 < 0) {
      iStack_38 = *(int *)(unaff_EBP + -0x24);
      iStack_40 = 0x6e733c;
      puStack_3c = puVar4;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    iStack_38 = 0x6e7349;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_38 = 0x6e7354;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    do {
      iVar3 = *(int *)(unaff_EBP + -0x8c);
      iStack_38 = *(int *)(iVar3 + 0x578);
      iStack_40 = unaff_EBP + -0x3c;
      puStack_3c = *(undefined1 **)(unaff_EBP + -0xa0);
      uStack_44 = 0x6e7378;
      FUN_006ea71c();
      *(undefined1 *)(unaff_EBP + -4) = 0x38;
      if (*(int *)(unaff_EBP + -0x38) == 0) {
        *(undefined1 *)(unaff_EBP + -4) = 0x34;
        FUN_005e05bf();
        break;
      }
      *(int *)(unaff_EBP + -0x40) = *(int *)(unaff_EBP + -0x30) * 0x10 + 0xac8 + iVar3;
      iStack_38 = 0x6e73a0;
      iVar3 = FUN_007b3eda();
      *(int *)(unaff_EBP + -0x28) = iVar3;
      if (iVar3 == 0) {
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        iStack_38 = unaff_EBP + -0x9c;
        *(undefined1 *)(unaff_EBP + -4) = 0x39;
        puStack_3c = (undefined1 *)0x6e73c9;
        puVar5 = (undefined4 *)FUN_00679d86();
        puStack_3c = (undefined1 *)*puVar5;
        iStack_38 = unaff_EBP + -0x14;
        *(undefined1 *)(unaff_EBP + -4) = 0x3a;
        iStack_40 = 0x6e73da;
        FUN_0040381b();
        *(undefined1 *)(unaff_EBP + -4) = 0x39;
        if (*(int *)(unaff_EBP + -0x9c) != 0) {
          iStack_38 = 0x6e73f4;
          FUN_00403384();
        }
        iStack_38 = 0x6e7401;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x3b;
        iStack_38 = 0x6e7411;
        FUN_00403191();
        iVar3 = *(int *)(unaff_EBP + -0x38);
        iVar2 = *(int *)(iVar3 + 0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0x3c;
        if (iVar2 == 0) {
          iStack_38 = 0x6e742a;
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(iVar3 + 0x10);
        if (*(int *)(*(int *)(unaff_EBP + -0x38) + 0x10) == 0) {
          iStack_38 = 0x6e7444;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          iStack_38 = 0x6e7456;
          FUN_00878dfb();
        }
        piVar6 = *(int **)(unaff_EBP + -0x14);
        *(int **)(unaff_EBP + -0x10) = piVar6;
        uVar7 = FUN_0040e53d();
        *(undefined4 *)(unaff_EBP + -0x20) = uVar7;
        FUN_0040e48b();
        iStack_40 = *(int *)(unaff_EBP + -0xc0);
        puStack_3c = *(undefined1 **)(unaff_EBP + -0xbc);
        iStack_38 = *(int *)(unaff_EBP + -0xb8);
        uStack_44 = *(undefined4 *)(unaff_EBP + -0xe4);
        iVar3 = (**(code **)(*piVar6 + 0x2c))();
        if (iVar3 < 0) {
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x3b;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x39;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          FUN_00878dfb();
        }
        iVar3 = (**(code **)(**(int **)(unaff_EBP + -0x14) + 0x70))();
        if (iVar3 < 0) {
          piStack_74 = (int *)0x6e7508;
          FUN_00878e09();
        }
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          FUN_00878dfb();
        }
        piVar6 = *(int **)(unaff_EBP + -0x14);
        iVar3 = (**(code **)(*piVar6 + 0x78))();
        if (iVar3 < 0) {
          uStack_7c = 0x6e752f;
          iStack_78 = iVar3;
          piStack_74 = piVar6;
          FUN_00878e09();
        }
        piStack_74 = (int *)0x6e753b;
        FUN_00403191();
        *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(*(int *)(unaff_EBP + -0x38) + 0x10);
        piVar6 = *(int **)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 0x3d;
        if (piVar6 == (int *)0x0) {
          piStack_74 = (int *)0x6e7559;
          FUN_00878dfb();
          piVar6 = *(int **)(unaff_EBP + -0x14);
        }
        iVar3 = *piVar6;
        uStack_80 = *(undefined4 *)(unaff_EBP + -0x20);
        uStack_7c = *(undefined4 *)(unaff_EBP + -0xe0);
        iStack_78 = *(int *)(unaff_EBP + -0xdc);
        uStack_84 = 0;
        piStack_74 = *(int **)(unaff_EBP + -0xd8);
        uStack_88 = 0;
        *(int **)(unaff_EBP + -0x10) = piVar6;
        puStack_90 = (undefined *)0x6e757e;
        piStack_8c = piVar6;
        iVar3 = (**(code **)(iVar3 + 0x80))();
        if (iVar3 < 0) {
          puStack_90 = &DAT_00963cc8;
          FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10));
        }
        puStack_90 = (undefined *)(unaff_EBP + -0xe0);
        *(undefined1 *)(unaff_EBP + -4) = 0x39;
        puStack_90 = (undefined *)FUN_00402bc3();
        if ((int)puStack_90 < 0) {
          FUN_00878dfb();
        }
        if (*(int *)(*(int *)(unaff_EBP + -0x38) + 0x10) == 0) {
          puStack_90 = (undefined *)0x80004003;
          FUN_00878dfb();
        }
        puStack_90 = (undefined *)0x6e75c8;
        iVar3 = FUN_006e7c85();
        if (iVar3 == 1) {
          puStack_90 = *(undefined **)(unaff_EBP + -0x14);
          *(undefined ***)(unaff_EBP + -0x20) = &puStack_90;
          FUN_004125f3();
          FUN_007d7ac7();
        }
        puStack_90 = (undefined *)0x3;
        FUN_004031b7(0x55);
        piVar6 = *(int **)(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 0x3e;
        if (piVar6 == (int *)0x0) {
          puStack_90 = (undefined *)0x80004003;
          FUN_00878dfb();
          piVar6 = *(int **)(unaff_EBP + -0x18);
        }
        uVar7 = (*(undefined4 **)(unaff_EBP + -0x40))[1];
        *(undefined4 *)(unaff_EBP + -0x20) = **(undefined4 **)(unaff_EBP + -0x40);
        iVar3 = *piVar6;
        *(int **)(unaff_EBP + -0x10) = piVar6;
        puStack_90 = *(undefined **)(unaff_EBP + -0x104);
        puVar4 = (undefined1 *)
                 (**(code **)(iVar3 + 0x80))
                           (piVar6,*(undefined4 *)(unaff_EBP + -0x20),uVar7,
                            *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x110),
                            *(undefined4 *)(unaff_EBP + -0x10c),*(undefined4 *)(unaff_EBP + -0x108))
        ;
        if ((int)puVar4 < 0) {
          iStack_38 = *(int *)(unaff_EBP + -0x10);
          iStack_40 = 0x6e7649;
          puStack_3c = puVar4;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x39;
        iStack_38 = 0x6e7659;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_38 = 0x6e7664;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x38;
        if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
          iStack_38 = 0x6e7679;
          (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
        }
      }
      else {
        iStack_38 = 0xff;
        puStack_3c = (undefined1 *)0x6e7690;
        FUN_004031b7();
        *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(*(int *)(unaff_EBP + -0x38) + 0x10);
        piVar6 = *(int **)(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 0x3f;
        if (piVar6 == (int *)0x0) {
          iStack_38 = 0x6e76ae;
          FUN_00878dfb();
          piVar6 = *(int **)(unaff_EBP + -0x18);
        }
        uStack_44 = *(undefined4 *)(unaff_EBP + -0x20);
        iStack_40 = *(int *)(unaff_EBP + -0x100);
        puStack_3c = *(undefined1 **)(unaff_EBP + -0xfc);
        *(undefined4 *)(unaff_EBP + -0x10) = **(undefined4 **)(unaff_EBP + -0x40);
        iVar3 = *piVar6;
        iStack_38 = *(int *)(unaff_EBP + -0xf8);
        *(int **)(unaff_EBP + -0x14) = piVar6;
        puVar4 = (undefined1 *)(**(code **)(iVar3 + 0x80))();
        if ((int)puVar4 < 0) {
          iStack_38 = *(int *)(unaff_EBP + -0x14);
          iStack_40 = 0x6e76f0;
          puStack_3c = puVar4;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x38;
        iStack_38 = 0x6e7700;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_38 = 0x6e770b;
          FUN_00878dfb();
        }
      }
      iStack_38 = 0x6e7715;
      iVar3 = FUN_007b3f2c();
      if (iVar3 == 0) {
        if (*(int *)(unaff_EBP + -0x28) != 0) {
          iStack_38 = 0x6e78c8;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x74));
          iStack_38 = unaff_EBP + -0x74;
          puStack_3c = (undefined1 *)0x6e78d2;
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            iStack_38 = 0x6e78e0;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x49;
          iStack_38 = 0x6e78ed;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x88));
          iStack_38 = unaff_EBP + -0x88;
          puStack_3c = (undefined1 *)0x6e78fa;
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            iStack_38 = 0x6e7906;
            FUN_00878dfb();
          }
          iStack_38 = 0;
          puStack_3c = (undefined1 *)(unaff_EBP + -0x74);
          iStack_40 = unaff_EBP + -0x88;
          *(undefined4 **)(unaff_EBP + -0x20) = &uStack_44;
          *(undefined1 *)(unaff_EBP + -4) = 0x4a;
          FUN_00679e4e();
          *(undefined1 *)(unaff_EBP + -4) = 0x4a;
          FUN_00405a1d();
          FUN_00402660();
          FUN_00404a02();
          *(undefined1 *)(unaff_EBP + -4) = 0x4c;
          puStack_3c = (undefined1 *)0x6e7956;
          iVar3 = FUN_004032b4();
          *(int *)(unaff_EBP + -0x98) = iVar3;
          *(undefined4 *)(unaff_EBP + -0x24) = 0;
          if (iVar3 != 0) {
            iStack_38 = 0x6e7972;
            iVar3 = FUN_00404b30();
            if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
              iStack_38 = 0x6e7983;
              FUN_00878dfb();
            }
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x50;
          iStack_38 = 0x6e7993;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            iStack_38 = 0x6e799e;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x4f;
          iStack_38 = 0x6e79ae;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            iStack_38 = 0x6e79b9;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x4e;
          iStack_38 = 0x6e79c6;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            iStack_38 = 0x6e79d1;
            FUN_00878dfb();
          }
          FUN_0087a1b0();
          iStack_38 = 0;
          iStack_40 = *(int *)(unaff_EBP + -0x28);
          uStack_44 = 0x6e79e6;
          puStack_3c = (undefined1 *)&piStack_30;
          iStack_40 = FUN_00412335();
          *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_3c;
          uStack_44 = 0x6e79f2;
          FUN_004033a1();
          iStack_40 = unaff_EBP + -0x170;
          *(undefined1 *)(unaff_EBP + -4) = 0x4e;
          uStack_44 = 0x6e7a05;
          FUN_0040263d();
          uStack_44 = 0x6e7a0c;
          FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x52;
          puStack_3c = (undefined1 *)0x6e7a17;
          iVar3 = FUN_004032b4();
          *(int *)(unaff_EBP + -0x2c) = iVar3;
          *(undefined4 *)(unaff_EBP + -0x34) = 0;
          if (iVar3 != 0) {
            iStack_38 = 0x6e7a2d;
            iVar3 = FUN_0041a581();
            if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
              iStack_38 = 0x6e7a3e;
              FUN_00878dfb();
            }
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x54;
          iStack_38 = 0x6e7a4e;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            iStack_38 = 0x6e7a59;
            FUN_00878dfb();
          }
          iStack_38 = 0xff;
          puStack_3c = (undefined1 *)0x6e7a6b;
          FUN_004031b7();
          *(undefined1 *)(unaff_EBP + -4) = 0x55;
          if (*(int *)(unaff_EBP + -0x34) == 0) {
            iStack_38 = 0x6e7a7e;
            FUN_00878dfb();
          }
          if (*(int *)(unaff_EBP + -0x18) == 0) {
            iStack_38 = 0x6e7a8d;
            FUN_00878dfb();
          }
          piVar6 = *(int **)(unaff_EBP + -0x18);
          *(int **)(unaff_EBP + -0x28) = piVar6;
          *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x34);
          FUN_0040e53d();
          uStack_44 = *(undefined4 *)(unaff_EBP + -0x20);
          iStack_40 = *(int *)(unaff_EBP + -0xb0);
          puStack_3c = *(undefined1 **)(unaff_EBP + -0xac);
          iStack_38 = *(int *)(unaff_EBP + -0xa8);
          puVar4 = (undefined1 *)(**(code **)(*piVar6 + 0x80))();
          if ((int)puVar4 < 0) {
            iStack_38 = *(int *)(unaff_EBP + -0x28);
            iStack_40 = 0x6e7add;
            puStack_3c = puVar4;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x54;
          iStack_38 = 0x6e7aed;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            iStack_38 = 0x6e7af8;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x4e;
          if (*(int **)(unaff_EBP + -0x34) != (int *)0x0) {
            iStack_38 = 0x6e7b09;
            (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
          }
          piVar6 = *(int **)(unaff_EBP + -0x24);
          *(undefined1 *)(unaff_EBP + -4) = 0x38;
          goto LAB_006e7b10;
        }
      }
      else {
        iStack_38 = 0x6e772a;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x40;
        iStack_38 = 0x6e773a;
        FUN_00403191();
        iStack_38 = 0;
        puStack_3c = (undefined1 *)(unaff_EBP + -0x120);
        iStack_40 = unaff_EBP + -0x130;
        *(undefined4 **)(unaff_EBP + -0x20) = &uStack_44;
        *(undefined1 *)(unaff_EBP + -4) = 0x41;
        FUN_004033a1();
        *(undefined1 *)(unaff_EBP + -4) = 0x41;
        FUN_00405a1d();
        FUN_00402660();
        FUN_00404a02();
        *(undefined1 *)(unaff_EBP + -4) = 0x43;
        puStack_3c = (undefined1 *)0x6e7789;
        iVar3 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x94) = iVar3;
        *(undefined4 *)(unaff_EBP + -100) = 0;
        if (iVar3 != 0) {
          iStack_38 = 0x6e77a5;
          iVar3 = FUN_0041a581();
          if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
            iStack_38 = 0x6e77b6;
            FUN_00878dfb();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x47;
        iStack_38 = 0x6e77c6;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_38 = 0x6e77d1;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x46;
        iStack_38 = 0x6e77e1;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_38 = 0x6e77ec;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x45;
        iStack_38 = 0x6e77fc;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_38 = 0x6e7807;
          FUN_00878dfb();
        }
        iStack_38 = 0xff;
        puStack_3c = (undefined1 *)0x6e7819;
        FUN_004031b7();
        *(undefined1 *)(unaff_EBP + -4) = 0x48;
        if (*(int *)(unaff_EBP + -100) == 0) {
          iStack_38 = 0x6e782c;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x18) == 0) {
          iStack_38 = 0x6e783b;
          FUN_00878dfb();
        }
        piVar6 = *(int **)(unaff_EBP + -0x18);
        *(int **)(unaff_EBP + -0x10) = piVar6;
        *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -100);
        FUN_0040e53d();
        uStack_44 = *(undefined4 *)(unaff_EBP + -0x20);
        iStack_40 = *(int *)(unaff_EBP + -0xd0);
        puStack_3c = *(undefined1 **)(unaff_EBP + -0xcc);
        iStack_38 = *(int *)(unaff_EBP + -200);
        puVar4 = (undefined1 *)(**(code **)(*piVar6 + 0x80))();
        if ((int)puVar4 < 0) {
          iStack_38 = *(int *)(unaff_EBP + -0x10);
          iStack_40 = 0x6e788b;
          puStack_3c = puVar4;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x45;
        iStack_38 = 0x6e789b;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_38 = 0x6e78a6;
          FUN_00878dfb();
        }
        piVar6 = *(int **)(unaff_EBP + -100);
        *(undefined1 *)(unaff_EBP + -4) = 0x38;
LAB_006e7b10:
        if (piVar6 != (int *)0x0) {
          iStack_38 = 0x6e7b1a;
          (**(code **)(*piVar6 + 8))();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x34;
      if (*(int *)(unaff_EBP + -0x38) != 0) {
        iStack_38 = 0x6e7b2e;
        FUN_005e064d();
        *(undefined4 *)(unaff_EBP + -0x38) = 0;
      }
      *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x30) + 1;
    } while (*(int *)(unaff_EBP + -0x30) < 0x19);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
      iStack_38 = 0x6e7b5d;
      (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
    }
  }
  else {
    piStack_18 = (int *)0x6e69b0;
    FUN_007b3fce();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    piStack_18 = (int *)0x6e69c1;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    piStack_18 = (int *)0x6e69ce;
    FUN_00403191();
    piStack_18 = (int *)0x0;
    iStack_1c = unaff_EBP + -0x88;
    iStack_20 = unaff_EBP + -0x74;
    puStack_2c = (undefined1 *)&uStack_24;
    *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_24;
    iStack_28 = 0x9ef;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    piStack_30 = (int *)0x6e69f7;
    FUN_00679e4e();
    iStack_28 = unaff_EBP + -0xb0;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    puStack_2c = (undefined1 *)0x6e6a07;
    FUN_00405a1d();
    puStack_2c = (undefined1 *)0x6e6a0e;
    FUN_00402660();
    puStack_2c = (undefined1 *)0x6e6a15;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_1c = 0x6e6a20;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x28) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    if (iVar3 != 0) {
      piStack_18 = (int *)0x6e6a36;
      iVar3 = FUN_0041a581();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        piStack_18 = (int *)0x6e6a47;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    piStack_18 = (int *)0x6e6a57;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_18 = (int *)0x6e6a62;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    piStack_18 = (int *)0x6e6a6f;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_18 = (int *)0x6e6a7a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    piStack_18 = (int *)0x6e6a8a;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_18 = (int *)0x6e6a95;
      FUN_00878dfb();
    }
    piStack_18 = (int *)0xff;
    iStack_1c = 0x6e6aa4;
    FUN_004031b7();
    piVar6 = *(int **)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (piVar6 == (int *)0x0) {
      piStack_18 = (int *)0x6e6ab9;
      FUN_00878dfb();
      piVar6 = *(int **)(unaff_EBP + -0x18);
    }
    iVar3 = *piVar6;
    uStack_24 = *(undefined4 *)(unaff_EBP + -0x34);
    iStack_20 = *(undefined4 *)(unaff_EBP + -0x60);
    iStack_1c = *(undefined4 *)(unaff_EBP + -0x5c);
    iStack_28 = 5;
    piStack_18 = *(int **)(unaff_EBP + -0x58);
    puStack_2c = (undefined1 *)0x0;
    *(int **)(unaff_EBP + -0x10) = piVar6;
    piStack_30 = piVar6;
    puVar4 = (undefined1 *)(**(code **)(iVar3 + 0x80))();
    if ((int)puVar4 < 0) {
      iStack_38 = *(int *)(unaff_EBP + -0x10);
      iStack_40 = 0x6e6aed;
      puStack_3c = puVar4;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_38 = 0x6e6afa;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_38 = 0x6e6b05;
      FUN_00878dfb();
    }
    if (DAT_00979168 != 0) {
      iStack_38 = 0xff;
      puStack_3c = (undefined1 *)0x6e6b21;
      FUN_004031b7();
      iStack_38 = unaff_EBP + -0x40;
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      puStack_3c = (undefined1 *)0x6e6b3a;
      puVar5 = (undefined4 *)FUN_005e01b7();
      *(undefined4 *)(unaff_EBP + -0x10) = *puVar5;
      piVar6 = *(int **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      if (piVar6 == (int *)0x0) {
        iStack_38 = 0x6e6b54;
        FUN_00878dfb();
        piVar6 = *(int **)(unaff_EBP + -0x18);
      }
      iVar3 = *piVar6;
      uStack_44 = *(undefined4 *)(unaff_EBP + -0x10);
      iStack_40 = *(int *)(unaff_EBP + -0x60);
      puStack_3c = *(undefined1 **)(unaff_EBP + -0x5c);
      iStack_38 = *(int *)(unaff_EBP + -0x58);
      *(int **)(unaff_EBP + -0x24) = piVar6;
      puVar4 = (undefined1 *)(**(code **)(iVar3 + 0x80))();
      if ((int)puVar4 < 0) {
        iStack_38 = *(int *)(unaff_EBP + -0x24);
        iStack_40 = 0x6e6b88;
        puStack_3c = puVar4;
        FUN_00878e09();
      }
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_38 = 0x6e6b9d;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_38 = 0x6e6ba8;
        FUN_00878dfb();
      }
    }
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    iStack_38 = unaff_EBP + -0x1c;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    puStack_3c = (undefined1 *)0x6e6bbb;
    FUN_007d4a9a();
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x38);
    iStack_38 = unaff_EBP + -0x24;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    puStack_3c = (undefined1 *)0x6e6bdd;
    piVar6 = (int *)FUN_00679d22();
    iStack_38 = *piVar6;
    puStack_3c = (undefined1 *)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_40 = 0x6e6bf3;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      iStack_38 = 0x6e6c0a;
      FUN_00434e38();
    }
    iStack_38 = 0x6e6c14;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_38 = 0x6e6c24;
    puStack_3c = (undefined1 *)FUN_00449713();
    *(int **)(unaff_EBP + -0x2c) = &iStack_38;
    iStack_40 = 0x6e6c30;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    puStack_3c = (undefined1 *)0x6e6c3c;
    FUN_0044974c();
    puStack_3c = (undefined1 *)0x6e6c43;
    uVar7 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + -0x30) = uVar7;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_38 = 0x6e6c53;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_38 = 0x6e6c5e;
      FUN_00878dfb();
    }
    iStack_38 = 0x6e6c67;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_38 = 0x6e6c74;
    FUN_00403191();
    iStack_38 = unaff_EBP + -0x60;
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    puStack_3c = (undefined1 *)0x6e6c88;
    puStack_3c = (undefined1 *)FUN_00449749();
    iStack_40 = 0x6e6c91;
    uStack_44 = FUN_00449713();
    *(int **)(unaff_EBP + -0x2c) = &iStack_40;
    FUN_00448a17();
    uStack_44 = 0x54;
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    FUN_004115d9();
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_38 = 0x6e6cc8;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_38 = 0x6e6cd3;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_38 = 0x6e6ce0;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_38 = 0x6e6ceb;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x38);
    iStack_38 = unaff_EBP + -0x24;
    puStack_3c = (undefined1 *)0x6e6cfd;
    piVar6 = (int *)FUN_00679d22();
    iStack_38 = *piVar6;
    puStack_3c = (undefined1 *)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iStack_40 = 0x6e6d13;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      iStack_38 = 0x6e6d2a;
      FUN_00434e38();
    }
    iStack_38 = 0x6e6d34;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_38 = 0x6e6d44;
    puStack_3c = (undefined1 *)FUN_00449713();
    *(int **)(unaff_EBP + -0x2c) = &iStack_38;
    iStack_40 = 0x6e6d50;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    puStack_3c = (undefined1 *)0x6e6d5c;
    FUN_0044974c();
    puStack_3c = (undefined1 *)0x6e6d63;
    uVar7 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + -0x30) = uVar7;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_38 = 0x6e6d73;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_38 = 0x6e6d7e;
      FUN_00878dfb();
    }
    iStack_38 = 0x6e6d87;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    iStack_38 = 0x6e6d94;
    FUN_00403191();
    iStack_38 = unaff_EBP + -0x50;
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    puStack_3c = (undefined1 *)0x6e6da8;
    puStack_3c = (undefined1 *)FUN_00449749();
    iStack_40 = 0x6e6db1;
    uStack_44 = FUN_00449713();
    *(int **)(unaff_EBP + -0x2c) = &iStack_40;
    FUN_00448a17();
    uStack_44 = 0x87;
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    FUN_004115d9();
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    iStack_38 = 0x6e6deb;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_38 = 0x6e6df6;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_38 = 0x6e6e03;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_38 = 0x6e6e0e;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x38);
    iStack_38 = unaff_EBP + -0x24;
    puStack_3c = (undefined1 *)0x6e6e20;
    piVar6 = (int *)FUN_00679d22();
    iStack_38 = *piVar6;
    puStack_3c = (undefined1 *)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    iStack_40 = 0x6e6e36;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      iStack_38 = 0x6e6e4d;
      FUN_00434e38();
    }
    iStack_38 = 0x6e6e57;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    iStack_38 = 0x6e6e67;
    puStack_3c = (undefined1 *)FUN_00449713();
    *(int **)(unaff_EBP + -0x2c) = &iStack_38;
    iStack_40 = 0x6e6e73;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    puStack_3c = (undefined1 *)0x6e6e7f;
    FUN_0044974c();
    puStack_3c = (undefined1 *)0x6e6e86;
    uVar7 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + -0x30) = uVar7;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_38 = 0x6e6e96;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_38 = 0x6e6ea1;
      FUN_00878dfb();
    }
    iStack_38 = 0x6e6eaa;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    iStack_38 = 0x6e6eb7;
    FUN_00403191();
    iStack_38 = unaff_EBP + -0x50;
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    puStack_3c = (undefined1 *)0x6e6ecb;
    puStack_3c = (undefined1 *)FUN_00449749();
    iStack_40 = 0x6e6ed4;
    uStack_44 = FUN_00449713();
    *(int **)(unaff_EBP + -0x2c) = &iStack_40;
    FUN_00448a17();
    uStack_44 = 0xa8;
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    FUN_004115d9();
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    iStack_38 = 0x6e6f0e;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_38 = 0x6e6f19;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_38 = 0x6e6f26;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_38 = 0x6e6f31;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x38);
    iStack_38 = unaff_EBP + -0x24;
    puStack_3c = (undefined1 *)0x6e6f43;
    piVar6 = (int *)FUN_00679d22();
    iStack_38 = *piVar6;
    puStack_3c = (undefined1 *)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    iStack_40 = 0x6e6f59;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      iStack_38 = 0x6e6f70;
      FUN_00434e38();
    }
    iStack_38 = 0x6e6f7a;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_38 = 0x6e6f8a;
    puStack_3c = (undefined1 *)FUN_00449713();
    *(int **)(unaff_EBP + -0x2c) = &iStack_38;
    iStack_40 = 0x6e6f96;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    puStack_3c = (undefined1 *)0x6e6fa2;
    FUN_0044974c();
    puStack_3c = (undefined1 *)0x6e6fa9;
    FUN_00448ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_38 = 0x6e6fb8;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_38 = 0x6e6fc3;
      FUN_00878dfb();
    }
    iStack_38 = 0x6e6fcc;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    iStack_38 = 0x6e6fd9;
    FUN_00403191();
    iStack_38 = unaff_EBP + -0x50;
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    puStack_3c = (undefined1 *)0x6e6fed;
    puStack_3c = (undefined1 *)FUN_00449749();
    iStack_40 = 0x6e6ff6;
    uStack_44 = FUN_00449713();
    *(int **)(unaff_EBP + -0x2c) = &iStack_40;
    iStack_40 = extraout_ECX;
    FUN_00448a17();
    uStack_44 = 0xbb;
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    FUN_004115d9();
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    iStack_38 = 0x6e7031;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_38 = 0x6e703c;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_38 = 0x6e7049;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_38 = 0x6e7054;
      FUN_00878dfb();
    }
    pcVar1 = *(char **)(*(int *)(unaff_EBP + -0x38) + 0x20);
    if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
      iStack_38 = 0x6e7074;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      iStack_38 = 0x6e7084;
      FUN_006ea9f9();
      iStack_38 = 0x6e708e;
      puStack_3c = (undefined1 *)FUN_00449713();
      *(int **)(unaff_EBP + -0x2c) = &iStack_38;
      iStack_40 = 0x6e709a;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      puStack_3c = (undefined1 *)0x6e70a6;
      FUN_0044974c();
      puStack_3c = (undefined1 *)0x6e70ad;
      FUN_00448ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iStack_38 = 0x6e70bc;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_38 = 0x6e70c7;
        FUN_00878dfb();
      }
      iStack_38 = 0x6e70d0;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      iStack_38 = 0x6e70dd;
      FUN_00403191();
      iStack_38 = unaff_EBP + -0x50;
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      puStack_3c = (undefined1 *)0x6e70f1;
      puStack_3c = (undefined1 *)FUN_00449749();
      iStack_40 = 0x6e70fa;
      FUN_006ea9f9();
      iStack_40 = 0x6e7104;
      uStack_44 = FUN_00449713();
      *(int **)(unaff_EBP + -0x2c) = &iStack_40;
      iStack_40 = extraout_ECX_00;
      FUN_00448a17();
      uStack_44 = 0xe1;
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      FUN_004115d9();
      FUN_00448e3a();
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      iStack_38 = 0x6e7138;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_38 = 0x6e7143;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iStack_38 = 0x6e7150;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_38 = 0x6e715b;
        FUN_00878dfb();
      }
    }
    FUN_004497b5();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      iStack_38 = 0x6e7177;
      FUN_00434e38();
    }
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_006eabaf();
  }
  iStack_38 = 0x6e7b69;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x74));
  iStack_38 = unaff_EBP + -0x74;
  puStack_3c = (undefined1 *)0x6e7b73;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_38 = 0x6e7b7f;
    FUN_00878dfb();
  }
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0x8c) + 0xab4);
  *(undefined1 *)(unaff_EBP + -4) = 0x56;
  if (iVar3 == 0) {
    iStack_38 = 0x6e7ba2;
    FUN_00878dfb();
  }
  iStack_38 = unaff_EBP + -0x78;
  puStack_3c = (undefined1 *)0x6e7bb3;
  FUN_00425067();
  *(undefined1 *)(unaff_EBP + -4) = 0x58;
  iStack_38 = 0x6e7bc0;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_38 = 0x6e7bcb;
    FUN_00878dfb();
  }
  iStack_38 = 0x6e7bd4;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x88));
  iStack_38 = unaff_EBP + -0x88;
  puStack_3c = (undefined1 *)0x6e7be1;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_38 = 0x6e7bed;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x59;
  if (*(int *)(unaff_EBP + -0x78) == 0) {
    iStack_38 = 0x6e7c01;
    FUN_00878dfb();
  }
  uStack_44 = *(undefined4 *)(unaff_EBP + -0x18);
  iStack_40 = *(int *)(unaff_EBP + -0x88);
  puStack_3c = *(undefined1 **)(unaff_EBP + -0x84);
  iStack_38 = *(int *)(unaff_EBP + -0x80);
  iVar3 = (**(code **)(**(int **)(unaff_EBP + -0x78) + 0x80))();
  if (iVar3 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x58;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x78) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x78) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


