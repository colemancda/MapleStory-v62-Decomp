/* FUN_00545deb - 0x00545deb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00545deb(void)

{
  undefined4 uVar1;
  int extraout_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  int *piVar5;
  undefined4 *puVar6;
  
  FUN_00879bb8();
  piVar5 = (int *)(extraout_ECX + 0x74);
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(extraout_ECX + 400) = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + 8) = 0xe;
  *(int **)(unaff_EBP + -0x18) = piVar5;
  do {
    iVar4 = 0;
    do {
      if ((int *)*piVar5 != (int *)0x0) {
        (**(code **)(*(int *)*piVar5 + 0xc))();
        FUN_00450463();
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 2;
    } while (iVar4 < 2);
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 2;
  } while (*(int *)(unaff_EBP + 8) < 0x32);
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(undefined4 *)(unaff_EBP + -0x48) = 1;
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  iVar4 = *(int *)(extraout_ECX + 400);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (0 < iVar4) {
    puVar6 = *(undefined4 **)(unaff_EBP + -0x18);
    *(undefined4 *)(unaff_EBP + 8) = 2000;
    do {
      FUN_00545b91(unaff_EBP + -0x58,*(undefined4 *)(unaff_EBP + -0x14));
      iVar4 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x194);
      iVar3 = *(int *)(iVar4 + 0x68);
      if (iVar3 == 1) {
        uVar1 = FUN_00679d86(unaff_EBP + -0x30,0x114a);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_00419192(uVar1);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00402676();
        iVar4 = FUN_004029b9(0x578);
        *(int *)(unaff_EBP + -0x38) = iVar4;
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (iVar4 == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = FUN_0044f3fa();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00450382(uVar1);
        (**(code **)(*(int *)*puVar6 + 0x20))
                  (*(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + 8),
                   *(int *)(unaff_EBP + -0x58) + 0xd9,*(undefined4 *)(unaff_EBP + -0x54),0,
                   unaff_EBP + -0x48);
        uVar1 = FUN_00679d86(unaff_EBP + -0x34,0x114b);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        FUN_00419192(uVar1);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00402676();
        iVar4 = FUN_004029b9(0x578);
        *(int *)(unaff_EBP + -0x38) = iVar4;
        *(undefined1 *)(unaff_EBP + -4) = 4;
LAB_0054622b:
        if (iVar4 == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = FUN_0044f3fa();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00450382(uVar1);
        iVar4 = *(int *)puVar6[2];
        uVar1 = *(undefined4 *)(unaff_EBP + -0x54);
        iVar2 = *(int *)(unaff_EBP + -0x58) + 0xfc;
LAB_0054625e:
        iVar3 = *(int *)(unaff_EBP + 8) + 1;
LAB_00546264:
        (**(code **)(iVar4 + 0x20))
                  (*(undefined4 *)(unaff_EBP + -0x10),iVar3,iVar2,uVar1,0,unaff_EBP + -0x48);
      }
      else {
        if (iVar3 == 2) {
          uVar1 = FUN_00679d86(unaff_EBP + -0x2c,0x114c);
          *(undefined1 *)(unaff_EBP + -4) = 5;
          FUN_00419192(uVar1);
          *(undefined1 *)(unaff_EBP + -4) = 0;
          FUN_00402676();
          iVar4 = FUN_004029b9(0x578);
          *(int *)(unaff_EBP + -0x38) = iVar4;
          *(undefined1 *)(unaff_EBP + -4) = 6;
          if (iVar4 == 0) {
            uVar1 = 0;
          }
          else {
            uVar1 = FUN_0044f3fa();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          FUN_00450382(uVar1);
          iVar4 = *(int *)*puVar6;
          uVar1 = *(undefined4 *)(unaff_EBP + -0x54);
          iVar2 = *(int *)(unaff_EBP + -0x58) + 0xd9;
          iVar3 = *(int *)(unaff_EBP + 8);
          goto LAB_00546264;
        }
        if (iVar3 == 3) {
          FUN_00470891(s_UI_ITC_img_Auction_BtBid_009655b4,0xffffffff);
          iVar4 = FUN_004029b9(0x578);
          *(int *)(unaff_EBP + -0x38) = iVar4;
          *(undefined1 *)(unaff_EBP + -4) = 7;
          if (iVar4 == 0) {
            uVar1 = 0;
          }
          else {
            uVar1 = FUN_0044f3fa();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          FUN_00450382(uVar1);
          (**(code **)(*(int *)*puVar6 + 0x20))
                    (*(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + 8),
                     *(int *)(unaff_EBP + -0x58) + 0xd9,*(undefined4 *)(unaff_EBP + -0x54),0,
                     unaff_EBP + -0x48);
          uVar1 = FUN_00679d86(unaff_EBP + -0x28,0x114a);
          *(undefined1 *)(unaff_EBP + -4) = 8;
          FUN_00419192(uVar1);
          *(undefined1 *)(unaff_EBP + -4) = 0;
          FUN_00402676();
          iVar4 = FUN_004029b9(0x578);
          *(int *)(unaff_EBP + -0x38) = iVar4;
          *(undefined1 *)(unaff_EBP + -4) = 9;
          goto LAB_0054622b;
        }
        if (iVar3 == 4) {
          iVar4 = *(int *)(iVar4 + 0x6c);
          if (iVar4 == 0) {
            uVar1 = FUN_00679d86(unaff_EBP + -0x18,0x114d);
            *(undefined1 *)(unaff_EBP + -4) = 10;
            FUN_00419192(uVar1);
            *(undefined1 *)(unaff_EBP + -4) = 0;
            FUN_00402676();
            iVar4 = FUN_004029b9(0x578);
            *(int *)(unaff_EBP + -0x38) = iVar4;
            *(undefined1 *)(unaff_EBP + -4) = 0xb;
            if (iVar4 == 0) {
              uVar1 = 0;
            }
            else {
              uVar1 = FUN_0044f3fa();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0;
            FUN_00450382(uVar1);
            (**(code **)(*(int *)*puVar6 + 0x20))
                      (*(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + 8),
                       *(int *)(unaff_EBP + -0x58) + 0x1a9,*(undefined4 *)(unaff_EBP + -0x54),0,
                       unaff_EBP + -0x48);
            uVar1 = FUN_00679d86(unaff_EBP + -0x1c,0x114e);
            *(undefined1 *)(unaff_EBP + -4) = 0xc;
            FUN_00419192(uVar1);
            *(undefined1 *)(unaff_EBP + -4) = 0;
            FUN_00402676();
            iVar4 = FUN_004029b9(0x578);
            *(int *)(unaff_EBP + -0x38) = iVar4;
            *(undefined1 *)(unaff_EBP + -4) = 0xd;
          }
          else {
            if (iVar4 != 1) goto LAB_0054626a;
            uVar1 = FUN_00679d86(unaff_EBP + -0x20,0x114d);
            *(undefined1 *)(unaff_EBP + -4) = 0xe;
            FUN_00419192(uVar1);
            *(undefined1 *)(unaff_EBP + -4) = 0;
            FUN_00402676();
            iVar4 = FUN_004029b9(0x578);
            *(int *)(unaff_EBP + -0x38) = iVar4;
            *(undefined1 *)(unaff_EBP + -4) = 0xf;
            if (iVar4 == 0) {
              uVar1 = 0;
            }
            else {
              uVar1 = FUN_0044f3fa();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0;
            FUN_00450382(uVar1);
            (**(code **)(*(int *)*puVar6 + 0x20))
                      (*(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + 8),
                       *(int *)(unaff_EBP + -0x58) + 0x1a9,*(undefined4 *)(unaff_EBP + -0x54),0,
                       unaff_EBP + -0x48);
            uVar1 = FUN_00679d86(unaff_EBP + -0x24,0x114f);
            *(undefined1 *)(unaff_EBP + -4) = 0x10;
            FUN_00419192(uVar1);
            *(undefined1 *)(unaff_EBP + -4) = 0;
            FUN_00402676();
            iVar4 = FUN_004029b9(0x578);
            *(int *)(unaff_EBP + -0x38) = iVar4;
            *(undefined1 *)(unaff_EBP + -4) = 0x11;
          }
          if (iVar4 == 0) {
            uVar1 = 0;
          }
          else {
            uVar1 = FUN_0044f3fa();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          FUN_00450382(uVar1);
          iVar4 = *(int *)puVar6[2];
          uVar1 = *(undefined4 *)(unaff_EBP + -0x54);
          iVar2 = *(int *)(unaff_EBP + -0x58) + 0x1cc;
          goto LAB_0054625e;
        }
      }
LAB_0054626a:
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
      *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 2;
      puVar6 = puVar6 + 4;
    } while (*(int *)(unaff_EBP + -0x14) < *(int *)(*(int *)(unaff_EBP + -0x10) + 400));
  }
  FUN_008161f1(0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


