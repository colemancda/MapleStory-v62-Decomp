/* FUN_00688d26 - 0x00688d26 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00688d26(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  
  FUN_00879bb8();
  iStack_60 = 0x688d49;
  FUN_00486ada();
  FUN_004125d9();
  iVar3 = *(int *)(extraout_ECX + 0x28);
  if (iVar3 != 0) {
    while( true ) {
      iVar1 = *(int *)((-(uint)(iVar3 != 0) & iVar3 - 0x10U) + 4);
      uVar4 = *(undefined4 *)(iVar3 + 4);
      *(uint *)(unaff_EBP + -0x18) = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
      *(undefined4 *)(unaff_EBP + -0x34) = uVar4;
      FUN_0068a14e();
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iVar3 = (*DAT_0097b704)();
      piVar6 = *(int **)(unaff_EBP + -0x34);
      if ((*piVar6 == 0) && (0x708 < iVar3 - piVar6[7])) {
        iStack_60 = unaff_EBP + -0x14;
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        iStack_64 = piVar6[4] + -5;
        iStack_68 = piVar6[3];
        uStack_6c = 0x688dd2;
        iVar3 = FUN_00861327();
        *(int *)(unaff_EBP + -0x10) = iVar3;
        if (iVar3 == 0) {
          iStack_60 = *(undefined4 *)(*(int *)(unaff_EBP + -0x34) + 0xc);
          iStack_64 = 0x688ded;
          uVar4 = FUN_00861416();
          *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
          *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(*(int *)(unaff_EBP + -0x34) + 0x10);
        }
        iStack_60 = 0xff;
        iStack_64 = 0x688e08;
        iVar3 = FUN_004f0b6f();
        iStack_64 = iVar3 * 30000 + -0x3fffb1df;
        *(int **)(unaff_EBP + -0x2c) = &iStack_68;
        uStack_6c = 0;
        uStack_70 = 0x688e20;
        FUN_00424e0a();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        uStack_6c = 0x688e2c;
        iVar3 = FUN_0068a0e8();
        uStack_6c = *(undefined4 *)(iVar3 + 0x10);
        uStack_70 = 0x688e37;
        iVar3 = FUN_0068a0e8();
        uStack_70 = *(undefined4 *)(iVar3 + 0xc);
        *(undefined4 **)(unaff_EBP + -0x30) = &uStack_74;
        FUN_00424dd7(0);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        FUN_00679d86(unaff_EBP + -0x20,0xa61);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        uVar4 = FUN_00411641(0);
        puVar5 = (undefined4 *)FUN_0042e3f0(unaff_EBP + -0x1c,uVar4);
        iStack_60 = 0x688e85;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
                   (*(int *)(unaff_EBP + -0x34) + 0x14),(IBinding *)*puVar5);
        if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
          iStack_60 = 0x688e92;
          (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00402676();
        iStack_60 = 0xff;
        iStack_64 = 0x688ea7;
        iVar3 = FUN_004f0b6f();
        iStack_64 = iVar3 * 30000 + -0x3fffb1e0;
        *(int **)(unaff_EBP + -0x30) = &iStack_68;
        uStack_6c = 0;
        uStack_70 = 0x688ebf;
        FUN_00424e0a();
        *(undefined1 *)(unaff_EBP + -4) = 5;
        uStack_6c = 0x688ecb;
        iVar3 = FUN_0068a0e8();
        uStack_6c = *(undefined4 *)(iVar3 + 0x10);
        uStack_70 = 0x688ed6;
        iVar3 = FUN_0068a0e8();
        uStack_70 = *(undefined4 *)(iVar3 + 0xc);
        *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_74;
        FUN_00424dd7(0);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        FUN_00679d86(unaff_EBP + -0x28,0xa62);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        uVar4 = FUN_00411641(0);
        piVar6 = (int *)FUN_0042e3f0(unaff_EBP + -0x24,uVar4);
        piVar6 = (int *)*piVar6;
        piVar2 = *(int **)(*(int *)(unaff_EBP + -0x34) + 0x18);
        *(undefined1 *)(unaff_EBP + -4) = 9;
        if (piVar2 != piVar6) {
          *(int **)(*(int *)(unaff_EBP + -0x34) + 0x18) = piVar6;
          FUN_00424ed4();
          if (piVar2 != (int *)0x0) {
            iStack_60 = 0x688f36;
            (**(code **)(*piVar2 + 8))();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
          iStack_60 = 0x688f47;
          (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00402676();
        iStack_60 = 0x688f5e;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
        iStack_60 = unaff_EBP + -0x58;
        iStack_64 = 0x688f6d;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          iStack_60 = 0x688f79;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 10;
        iStack_60 = 0x688f83;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
        iStack_60 = unaff_EBP + -0x48;
        iStack_64 = 0x688f8d;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          iStack_60 = 0x688f99;
          FUN_00878dfb();
        }
        iVar3 = *(int *)(unaff_EBP + -0x34);
        iVar1 = *(int *)(iVar3 + 0x14);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        if (iVar1 == 0) {
          iStack_60 = 0x688fb2;
          FUN_00878dfb();
        }
        piVar6 = *(int **)(iVar3 + 0x14);
        iStack_68 = *(int *)(unaff_EBP + -0x58);
        iStack_64 = *(int *)(unaff_EBP + -0x54);
        iVar3 = *piVar6;
        iStack_60 = *(undefined4 *)(unaff_EBP + -0x50);
        uStack_74 = *(undefined4 *)(unaff_EBP + -0x44);
        uStack_70 = *(undefined4 *)(unaff_EBP + -0x40);
        *(int **)(unaff_EBP + -0x10) = piVar6;
        uStack_6c = *(undefined4 *)(unaff_EBP + -0x3c);
        iVar3 = (**(code **)(iVar3 + 0x110))(piVar6,0x20,*(undefined4 *)(unaff_EBP + -0x48));
        if (iVar3 < 0) {
          iStack_60 = *(undefined4 *)(unaff_EBP + -0x10);
          iStack_68 = 0x688fec;
          iStack_64 = iVar3;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 10;
        iStack_60 = 0x688ff9;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_60 = 0x689004;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iStack_60 = 0x689010;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_60 = 0x68901b;
          FUN_00878dfb();
        }
        **(undefined4 **)(unaff_EBP + -0x34) = 1;
        piVar6 = *(int **)(unaff_EBP + -0x34);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piVar6 != (int *)0x0) {
        iStack_60 = 0x689038;
        FUN_0068a181();
        *(undefined4 *)(unaff_EBP + -0x34) = 0;
      }
      if (*(int *)(unaff_EBP + -0x18) == 0) break;
      iVar3 = *(int *)(unaff_EBP + -0x18);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


