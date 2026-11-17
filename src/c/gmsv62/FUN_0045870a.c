/* FUN_0045870a - 0x0045870a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0045870a(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  size_t sVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  iVar1 = FUN_00455c59(unaff_EBP + -0x30);
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(iVar1 + 4);
  FUN_0045e4a2();
  iVar1 = DAT_00978368;
  iVar2 = *(int *)(unaff_EBP + 8) / 10000;
  *(int *)(unaff_EBP + -0x24) = iVar2;
  if ((iVar2 == 0x207) || (iVar2 == 0x20c)) {
    FUN_004497f5(unaff_EBP + -0x10,*(undefined4 *)(unaff_EBP + 8));
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      *(undefined4 *)(unaff_EBP + 8) = 0x22000006;
      *(undefined4 *)(unaff_EBP + 0xc) = 0x22000006;
      *(undefined1 *)(unaff_EBP + -4) = 1;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(unaff_EBP + 0xc,&DAT_008f7260);
    }
    iVar2 = FUN_00458d2b(0);
    if (iVar2 == 0) {
      uVar3 = FUN_00679d22(unaff_EBP + 8,0x205);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00414f8b(uVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
      FUN_004027eb();
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x1c) = 1;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      do {
        iVar2 = FUN_00458d2b(*(undefined4 *)(unaff_EBP + -0x18));
        if (iVar2 == 0) break;
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        iVar4 = FUN_0045a56b(*(undefined4 *)(unaff_EBP + 8));
        if (iVar4 == 0) {
LAB_00458836:
          sVar5 = _strlen((char *)(iVar2 + 0x28));
          FUN_0045efbb((char *)(iVar2 + 0x28),sVar5);
          sVar5 = _strlen(&DAT_00964364);
          FUN_0045efbb(&DAT_00964364,sVar5);
        }
        else {
          uVar3 = FUN_0045e2eb();
          *(undefined4 *)(unaff_EBP + -0x20) = uVar3;
          iVar4 = FUN_0045f146(unaff_EBP + -0x20,0);
          if (iVar4 == 0) goto LAB_00458836;
        }
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
      } while (*(int *)(unaff_EBP + -0x18) < 3);
      if (*(int *)(unaff_EBP + -0x1c) == 0) {
        if (((char *)**(undefined4 **)(unaff_EBP + 0xc) == (char *)0x0) ||
           (*(char *)**(undefined4 **)(unaff_EBP + 0xc) == '\0')) {
          piVar6 = *(int **)(unaff_EBP + -0x10);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (piVar6 != (int *)0x0) {
            (**(code **)(*piVar6 + 8))(piVar6);
          }
          goto LAB_0045890b;
        }
        piVar6 = (int *)FUN_00679d22(unaff_EBP + 0xc,0x206);
        iVar1 = *piVar6;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        if (iVar1 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(iVar1 + -4);
        }
        FUN_0045efbb(iVar1,uVar3);
        *(undefined1 *)(unaff_EBP + -4) = 0;
      }
      else {
        uVar3 = FUN_00679d22(unaff_EBP + 8,0x205);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        FUN_00414f8b(uVar3);
        *(undefined1 *)(unaff_EBP + -4) = 0;
      }
      FUN_00414ebb();
      piVar6 = *(int **)(unaff_EBP + -0x10);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 8))(piVar6);
      }
    }
  }
  else {
LAB_0045890b:
    if (*(int *)(unaff_EBP + 8) / 1000000 != 1) goto LAB_00458c3b;
    iVar2 = FUN_0054e7b3(*(undefined4 *)(unaff_EBP + 8));
    if (iVar2 == 0) {
      puVar7 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,0x239);
      uVar3 = *puVar7;
      *(undefined4 *)(unaff_EBP + -4) = 5;
      FUN_00434e21(*(undefined4 *)(unaff_EBP + 0xc),uVar3);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
    else {
      iVar4 = FUN_00413367(iVar1 + 0x20b4,*(undefined4 *)(iVar1 + 0x20bc));
      iVar8 = FUN_00413367(iVar2 + 0x54,*(undefined4 *)(iVar2 + 0x5c));
      if ((iVar8 == 0) ||
         (uVar9 = FUN_00413367(iVar2 + 0x54,*(undefined4 *)(iVar2 + 0x5c)),
         (-(uint)(iVar4 / 100 != 0) & 1 << ((char)(iVar4 / 100) - 1U & 0x1f) & uVar9) != 0)) {
        iVar4 = FUN_00413367(iVar2 + 0x60,*(undefined4 *)(iVar2 + 0x68));
        iVar8 = FUN_00413367(iVar1 + 0x20a8,*(undefined4 *)(iVar1 + 0x20b0));
        if (iVar8 < iVar4) {
          puVar7 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,0x1fd);
          uVar3 = *puVar7;
          *(undefined4 *)(unaff_EBP + -4) = 7;
          FUN_00434e21(*(undefined4 *)(unaff_EBP + 0xc),uVar3);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        }
        else {
          iVar4 = FUN_00413367(iVar2 + 0x48,*(undefined4 *)(iVar2 + 0x50));
          if (iVar4 != 0) {
            iVar2 = FUN_00413367(iVar2 + 0x48,*(undefined4 *)(iVar2 + 0x50));
            iVar1 = FUN_00413367(iVar1 + 0x20f0,*(undefined4 *)(iVar1 + 0x20f8));
            if (iVar1 < iVar2) {
              puVar7 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,0x1fe);
              uVar3 = *puVar7;
              *(undefined4 *)(unaff_EBP + -4) = 8;
              FUN_00434e21(*(undefined4 *)(unaff_EBP + 0xc),uVar3);
              *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
              goto LAB_00458c32;
            }
          }
          if ((*(int *)(unaff_EBP + 8) / 100000 == 0x11) &&
             (*(int *)(*(int *)(unaff_EBP + -0x14) + 0x12f) != 0)) {
            uVar3 = FUN_0045e2eb();
            iVar1 = FUN_00459d68(uVar3);
            if (iVar1 == 0) {
              puVar7 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,0x201);
              uVar3 = *puVar7;
              *(undefined4 *)(unaff_EBP + -4) = 9;
              FUN_00434e21(*(undefined4 *)(unaff_EBP + 0xc),uVar3);
              *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
              goto LAB_00458c32;
            }
          }
          if (*(int *)(unaff_EBP + -0x24) != 0xb4) {
LAB_00458c3b:
            uVar3 = 1;
            goto LAB_00458c3e;
          }
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
          *(undefined4 *)(unaff_EBP + 8) = 0;
          *(undefined4 *)(unaff_EBP + -0x1c) = 1;
          puVar7 = (undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x1b);
          do {
            iVar1 = FUN_00458d57(5,*puVar7,puVar7[1]);
            if (iVar1 == 0) break;
            *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
            *(undefined4 *)(unaff_EBP + -0x1c) = 0;
            iVar1 = FUN_00458c4f(unaff_EBP + -0x28,5,iVar1);
            iVar1 = *(int *)(iVar1 + 4);
            if (*(int *)(unaff_EBP + -0x24) != 0) {
              FUN_00449913(0);
              *(undefined4 *)(unaff_EBP + -0x24) = 0;
            }
            uVar3 = FUN_0045e2eb();
            iVar2 = FUN_00459dd4(uVar3);
            if (iVar2 == 0) {
              pcVar10 = (char *)(iVar1 + 0x28);
              sVar5 = _strlen(pcVar10);
              FUN_0045efbb(pcVar10,sVar5);
              sVar5 = _strlen(&DAT_00964364);
              FUN_0045efbb(&DAT_00964364,sVar5);
            }
            *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
            puVar7 = puVar7 + 2;
          } while (*(int *)(unaff_EBP + 8) < 3);
          if (*(int *)(unaff_EBP + -0x1c) == 0) {
            pcVar10 = (char *)**(undefined4 **)(unaff_EBP + 0xc);
            if ((pcVar10 == (char *)0x0) || (*pcVar10 == '\0')) goto LAB_00458c3b;
            if (1 < *(int *)(unaff_EBP + -0x18)) {
              FUN_00434e21(*(undefined4 **)(unaff_EBP + 0xc),
                           s_One_or_more_of_your_pets_cannot_e_00964318);
              goto LAB_00458c37;
            }
            piVar6 = (int *)FUN_00679d22(unaff_EBP + 0xc,0x203);
            iVar1 = *piVar6;
            *(undefined4 *)(unaff_EBP + -4) = 0xb;
            if (iVar1 == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = *(undefined4 *)(iVar1 + -4);
            }
            FUN_0045efbb(iVar1,uVar3);
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          }
          else {
            uVar3 = FUN_00679d22(unaff_EBP + 8,0x204);
            *(undefined4 *)(unaff_EBP + -4) = 10;
            FUN_00414f8b(uVar3);
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          }
        }
      }
      else {
        puVar7 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,0x1fc);
        uVar3 = *puVar7;
        *(undefined4 *)(unaff_EBP + -4) = 6;
        FUN_00434e21(*(undefined4 *)(unaff_EBP + 0xc),uVar3);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      }
    }
LAB_00458c32:
    FUN_00414ebb();
  }
LAB_00458c37:
  uVar3 = 0;
LAB_00458c3e:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


