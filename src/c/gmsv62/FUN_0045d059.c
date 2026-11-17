/* FUN_0045d059 - 0x0045d059 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0045d059(void)

{
  int iVar1;
  uint uVar2;
  int extraout_ECX;
  int *piVar3;
  int unaff_EBP;
  undefined1 auStack_50 [4];
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x40) == 0) {
    iStack_40 = 0x99;
    iStack_44 = 0x45d07c;
    FUN_00464f0d();
  }
  else if (*(int *)(extraout_ECX + 0x18) == 0) {
    iStack_40 = unaff_EBP + -0x24;
    *(undefined4 *)(unaff_EBP + -0x14) = DAT_00978368;
    iStack_44 = 0x45d0a6;
    iVar1 = FUN_00455c59();
    iVar1 = *(int *)(iVar1 + 4);
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      iStack_40 = 0;
      iStack_44 = 0x45d0b7;
      FUN_0045e7c2();
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
    }
    iStack_44 = *(int *)(unaff_EBP + 0x10);
    if (((0 < iStack_44) || (iStack_44 < 6)) && (0 < *(int *)(unaff_EBP + 0x14))) {
      iVar1 = *(int *)(iVar1 + 0x3e3 + iStack_44 * 4);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(iVar1 + -4);
      }
      if (*(int *)(unaff_EBP + 0x14) <= iVar1 + -1) {
        iStack_40 = *(undefined4 *)(unaff_EBP + 0x14);
        iStack_48 = unaff_EBP + -0x2c;
        uStack_4c = 0x45d0f3;
        iVar1 = FUN_00458c4f();
        *(bool *)(unaff_EBP + -0xd) = *(int *)(iVar1 + 4) != 0;
        if (*(int *)(unaff_EBP + -0x28) != 0) {
          iStack_40 = 0;
          iStack_44 = 0x45d108;
          FUN_00449913();
          *(undefined4 *)(unaff_EBP + -0x28) = 0;
        }
        if (*(char *)(unaff_EBP + -0xd) == '\0') {
          uVar2 = 0;
          for (iVar1 = 0;
              ((*(int *)(extraout_ECX + 0x488) != 0 &&
               (uVar2 < *(uint *)(*(int *)(extraout_ECX + 0x488) + -4))) &&
              ((piVar3 = (int *)(iVar1 + *(int *)(extraout_ECX + 0x488)),
               *piVar3 != *(int *)(unaff_EBP + 8) || (piVar3[1] != *(int *)(unaff_EBP + 0xc)))));
              iVar1 = iVar1 + 0x37) {
            uVar2 = uVar2 + 1;
          }
          iVar1 = *(int *)(extraout_ECX + 0x488);
          if ((iVar1 != 0) && (uVar2 < *(uint *)(iVar1 + -4))) {
            iVar1 = uVar2 * 0x37 + iVar1;
            iStack_40 = *(undefined4 *)(iVar1 + 0x14);
            iStack_44 = unaff_EBP + -0x1c;
            iStack_48 = 0x45d171;
            FUN_0084a5e4();
            *(undefined4 *)(unaff_EBP + -4) = 0;
            if ((*(int *)(unaff_EBP + -0x18) != 0) &&
               (*(int *)(*(int *)(unaff_EBP + -0x18) + 0x20) == 0)) {
              iStack_40 = 1;
              iStack_44 = *(undefined4 *)(iVar1 + 0x10);
              iStack_48 = 0x45d18c;
              iVar1 = FUN_0045d395();
              if (iVar1 != 0) {
                iStack_40 = 0;
                iStack_44 = 0;
                iStack_48 = 0;
                uStack_4c = 0;
                *(undefined1 **)(unaff_EBP + 0x14) = auStack_50;
                FUN_00679d22(auStack_50,0xb50);
                FUN_007db3ad();
                *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                if (*(int *)(unaff_EBP + -0x18) != 0) {
                  iStack_40 = 0;
                  iStack_44 = 0x45d1c8;
                  FUN_0045e794();
                }
                goto LAB_0045d07c;
              }
            }
            iStack_40 = 0;
            iStack_44 = 0;
            iStack_48 = 0xc6;
            uStack_4c = 0x45d1dc;
            FUN_0060142b();
            iStack_40 = 0xc;
            *(undefined1 *)(unaff_EBP + -4) = 1;
            iStack_44 = 0x45d1ea;
            FUN_00457cda();
            iStack_40 = 8;
            iStack_44 = unaff_EBP + 8;
            iStack_48 = 0x45d1f8;
            FUN_00457fa0();
            iStack_40 = *(undefined4 *)(unaff_EBP + 0x10);
            iStack_44 = 0x45d203;
            FUN_00457cda();
            iStack_40 = *(undefined4 *)(unaff_EBP + 0x14);
            iStack_44 = 0x45d20e;
            FUN_0045d247();
            iStack_40 = unaff_EBP + -0x3c;
            iStack_44 = 0x45d21d;
            FUN_004751b2();
            iStack_40 = 1;
            iVar1 = iStack_40;
            *(undefined4 *)(extraout_ECX + 0x18) = 1;
            *(undefined1 *)(unaff_EBP + -4) = 0;
            iStack_40 = 0x45d22e;
            FUN_0045ebca();
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            if (*(int *)(unaff_EBP + -0x18) != 0) {
              iStack_40 = 0;
              iStack_44 = 0x45d240;
              FUN_0045e794();
            }
            goto LAB_0045d07e;
          }
        }
      }
    }
  }
LAB_0045d07c:
  iVar1 = 0;
LAB_0045d07e:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}


