/* FUN_0073e80c - 0x0073e80c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0073e80c(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  uint uVar3;
  int unaff_EBP;
  int iVar4;
  undefined4 uStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  undefined4 *puStack_50;
  
  FUN_00879bb8();
  iVar1 = *(int *)(extraout_ECX + 0xc6c);
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (0 < iVar1) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0xfffffff3;
    do {
      if (DAT_0097be44 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(DAT_0097be44 + -4);
      }
      iVar4 = *(int *)(extraout_ECX + 0xaa0);
      if (*(int *)(iVar4 + 0x3c) == 0) {
        iVar4 = -1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0x38) - *(int *)(iVar4 + 0x3c);
      }
      uVar3 = (iVar1 - *(int *)(unaff_EBP + -0x14)) + iVar4;
      if (((-1 < (int)uVar3) && (DAT_0097be44 != 0)) && (uVar3 < *(uint *)(DAT_0097be44 + -4))) {
        *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(DAT_0097be44 + uVar3 * 8 + 4);
        puStack_50 = (undefined4 *)0x73e88e;
        FUN_00748841();
        puStack_50 = *(undefined4 **)(*(int *)(unaff_EBP + -0x28) + 0x18);
        iStack_54 = *(int *)(unaff_EBP + -0x28) + 0x10;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        iStack_58 = 0x73e8a0;
        iVar1 = FUN_00413367();
        if (iVar1 == 0xe) {
LAB_0073e8d7:
          if ((*(int *)(*(int *)(unaff_EBP + -0x28) + 0x24) != 0) &&
             (*(int *)(*(int *)(unaff_EBP + -0x28) + 0x28) != 0)) {
            puStack_50 = (undefined4 *)0x0;
            iVar4 = (*(int *)(extraout_ECX + 0xc74) -
                    (-(uint)(*(int *)(extraout_ECX + 0xc68) != 3) & 5)) +
                    *(int *)(extraout_ECX + 0xc64) + *(int *)(unaff_EBP + -0x18);
            iStack_54 = 0x3a;
            iStack_58 = 0x73e918;
            iVar1 = FUN_005e312e();
            puStack_50 = (undefined4 *)(iVar1 + -1);
            iStack_54 = unaff_EBP + -0x10;
            iStack_58 = 0x73e929;
            FUN_0046fcad();
            puStack_50 = &DAT_00980690;
            *(undefined1 *)(unaff_EBP + -4) = 1;
            iStack_54 = 0x73e93a;
            FUN_00403191();
            puStack_50 = (undefined4 *)(unaff_EBP + -0x3c);
            *(undefined1 *)(unaff_EBP + -4) = 2;
            iStack_54 = 0x73e94a;
            iStack_58 = FUN_00411641();
            *(int **)(unaff_EBP + -0x24) = &iStack_54;
            iStack_5c = 0x73e956;
            FUN_004033a1();
            *(undefined1 *)(unaff_EBP + -4) = 2;
            iStack_58 = 0x73e962;
            FUN_0074883d();
            iStack_58 = 0x73e969;
            FUN_0073eaf2();
            iStack_58 = 0x73e975;
            FUN_0044974c();
            iStack_58 = 0x73e97c;
            uVar2 = FUN_00448ebb();
            *(undefined4 *)(unaff_EBP + -0x24) = uVar2;
            puStack_50 = (undefined4 *)(unaff_EBP + -0x3c);
            *(undefined1 *)(unaff_EBP + -4) = 1;
            iStack_54 = 0x73e98c;
            puStack_50 = (undefined4 *)FUN_00402bc3();
            if ((int)puStack_50 < 0) {
              iStack_54 = 0x73e997;
              FUN_00878dfb();
            }
            puStack_50 = (undefined4 *)0x0;
            iStack_54 = 0;
            iStack_58 = 0;
            iStack_5c = 0;
            iStack_60 = -1;
            uStack_64 = *(undefined4 *)(unaff_EBP + -0x10);
            uStack_68 = 0;
            iStack_6c = 0;
            uStack_70 = 0x73e9a8;
            (*DAT_0097b4cc)();
            uStack_70 = 0x73e9b3;
            FUN_0087a1b0();
            iVar1 = *(int *)(DAT_00978368 + 0x2098);
            *(int **)(unaff_EBP + -0x20) = &iStack_6c;
            if (iVar1 == 0) {
              *(undefined4 *)(unaff_EBP + -0x1c) = 0;
            }
            else {
              *(int *)(unaff_EBP + -0x1c) = iVar1 + 4;
            }
            uStack_70 = 0;
            (*DAT_0097b4cc)(0,0,*(undefined4 *)(unaff_EBP + -0x10),0xffffffff,
                            *(undefined4 *)(unaff_EBP + -0x20),0x3fffffff,0);
            iVar1 = (*DAT_0097b4bc)(*(undefined4 *)(unaff_EBP + -0x20),
                                    *(undefined4 *)(unaff_EBP + -0x1c));
            if (iVar1 != 0) {
              puStack_50 = (undefined4 *)(iVar4 + 0xc);
              iStack_54 = *(int *)(unaff_EBP + -0x24) + 0x27;
              iStack_5c = *(int *)(unaff_EBP + -0x24) + 6;
              iStack_60 = unaff_EBP + -0x4c;
              uStack_64 = 0x73ea11;
              iStack_58 = iVar4;
              (*DAT_0097b504)();
              uStack_64 = *(undefined4 *)(unaff_EBP + 0xc);
              iStack_6c = unaff_EBP + -0x4c;
              uStack_68 = *(undefined4 *)(unaff_EBP + 8);
              uStack_70 = 0x73ea21;
              iVar1 = (*DAT_0097b57c)();
              if (iVar1 != 0) {
                puStack_50 = (undefined4 *)0x0;
                iStack_54 = 0;
                iStack_58 = 0;
                iStack_5c = 0;
                iStack_60 = 0xffffffff;
                uStack_64 = *(undefined4 *)(unaff_EBP + -0x10);
                uStack_68 = 0;
                iStack_6c = 0;
                uStack_70 = 0x73ea92;
                (*DAT_0097b4cc)();
                uStack_70 = 0x73ea9d;
                FUN_0087a1b0();
                uStack_70 = 0xffffffff;
                uVar2 = FUN_00411641(&iStack_6c);
                uVar2 = FUN_0045010e(uVar2);
                *(undefined4 **)(unaff_EBP + 0xc) = &uStack_70;
                uStack_70 = 0;
                FUN_00414edd(uVar2,0xffffffff);
                FUN_00748724();
                uStack_70 = 0x73eace;
                FUN_0073dd5c();
                *(undefined1 *)(unaff_EBP + -4) = 0;
                uStack_70 = 0x73ead9;
                FUN_00402676();
                *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                if (*(int *)(unaff_EBP + -0x28) != 0) {
                  uStack_70 = 0;
                  FUN_00748869();
                }
                uStack_70 = 1;
                goto LAB_0073ea6b;
              }
            }
            *(undefined1 *)(unaff_EBP + -4) = 0;
            puStack_50 = (undefined4 *)0x73ea30;
            FUN_00402676();
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            if (*(int *)(unaff_EBP + -0x28) != 0) {
              puStack_50 = (undefined4 *)0x0;
              iStack_54 = 0x73ea42;
              FUN_00748869();
              *(undefined4 *)(unaff_EBP + -0x28) = 0;
            }
            goto LAB_0073ea53;
          }
        }
        else {
          puStack_50 = *(undefined4 **)(*(int *)(unaff_EBP + -0x28) + 0x18);
          iStack_54 = *(int *)(unaff_EBP + -0x28) + 0x10;
          iStack_58 = 0x73e8b6;
          iVar1 = FUN_00413367();
          if (iVar1 == 0xf) goto LAB_0073e8d7;
          puStack_50 = *(undefined4 **)(*(int *)(unaff_EBP + -0x28) + 0x18);
          iStack_54 = *(int *)(unaff_EBP + -0x28) + 0x10;
          iStack_58 = 0x73e8cc;
          iVar1 = FUN_00413367();
          if (iVar1 == 0x11) goto LAB_0073e8d7;
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        puStack_50 = (undefined4 *)0x73ea53;
        FUN_00748853();
      }
LAB_0073ea53:
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + -0xd;
    } while (*(int *)(unaff_EBP + -0x14) < *(int *)(extraout_ECX + 0xc6c));
  }
  uStack_70 = 0;
LAB_0073ea6b:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uStack_70;
}


