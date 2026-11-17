/* FUN_005682c6 - 0x005682c6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005682c6(void)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int extraout_ECX;
  int iVar5;
  int unaff_EBP;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0x144) = 0;
  uVar3 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar3;
  cVar2 = FUN_0042452b();
  if ((((cVar2 != '\n') && (cVar2 != '\x16')) && (cVar2 != '\x12')) &&
     ((cVar2 != '\x18' && (cVar2 != '\t')))) {
    if (cVar2 == '\x1a') {
      *(undefined1 **)(unaff_EBP + 8) = &stack0xffffffd8;
      FUN_00679d22(&stack0xffffffd8,0xf65);
      FUN_007db3ad();
      goto LAB_00568363;
    }
    if (cVar2 != '\x06') {
      piVar4 = *(int **)(extraout_ECX + 0x164);
      iVar6 = -1;
      *(undefined4 *)(unaff_EBP + -0x10) = 0xffffffff;
      *(undefined4 *)(unaff_EBP + 8) = 0;
      do {
        if (*(int *)(unaff_EBP + -0x14) == *piVar4) {
          iVar6 = *(int *)(unaff_EBP + 8);
          *(int *)(unaff_EBP + -0x10) = iVar6;
          break;
        }
        *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
        piVar4 = piVar4 + 0xa0;
      } while (*(int *)(unaff_EBP + 8) < 6);
      if ((cVar2 != '\0') || (iVar6 < 0)) {
        *(undefined4 *)(unaff_EBP + 8) = 0x22000008;
        *(undefined4 *)(unaff_EBP + -0x10) = 0x22000008;
        *(undefined4 *)(unaff_EBP + -4) = 0;
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8();
      }
      if (iVar6 < 5) {
        iVar6 = iVar6 * 0x280;
        do {
          iVar1 = *(int *)(extraout_ECX + 0x164);
          *(int *)(unaff_EBP + 8) = iVar6 + 0x280;
          puVar7 = (undefined4 *)(iVar6 + 0x280 + iVar1);
          puVar8 = (undefined4 *)(iVar6 + iVar1);
          for (iVar5 = 0x34; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          *(undefined2 *)puVar8 = *(undefined2 *)puVar7;
          *(undefined1 *)((int)puVar8 + 2) = *(undefined1 *)((int)puVar7 + 2);
          FUN_0043f124();
          iVar6 = *(int *)(unaff_EBP + 8);
        } while (iVar6 < 0xc80);
      }
      *(undefined4 *)(*(int *)(extraout_ECX + 0x164) + 0xc80) = 0;
      FUN_0087a3a0();
      _memset((void *)(*(int *)(extraout_ECX + 0x168) + 0x50),0,0x10);
      if (DAT_0097941c != 0) {
        FUN_005719cc();
        FUN_005719f2();
      }
      if (*(int *)(extraout_ECX + 0x160) == -1) {
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x184),
                   (IBinding *)0x0);
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x188),
                   (IBinding *)0x0);
      }
      if (DAT_00978364 != 0) {
        FUN_00817f6e();
      }
      goto LAB_00568363;
    }
  }
  FUN_0057a546();
LAB_00568363:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


