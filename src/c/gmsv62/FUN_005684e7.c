/* FUN_005684e7 - 0x005684e7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005684e7(void)

{
  char cVar1;
  int iVar2;
  int extraout_ECX;
  int *piVar3;
  int iVar4;
  int unaff_EBP;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0x144) = 0;
  cVar1 = FUN_0042452b();
  iVar2 = (int)cVar1;
  *(int *)(unaff_EBP + -0x14) = iVar2;
  if (iVar2 != 10) {
    if (iVar2 == 0x1a) {
      uStack_24 = 0;
      *(undefined1 **)(unaff_EBP + 8) = auStack_28;
      FUN_00679d22(auStack_28,0xf6a);
      FUN_007db3ad();
      goto LAB_005686b2;
    }
    piVar3 = *(int **)(extraout_ECX + 0x164);
    iVar2 = -1;
    *(undefined4 *)(unaff_EBP + -0x10) = 0xffffffff;
    iVar4 = 0;
    do {
      if (*piVar3 == 0) {
        *(int *)(unaff_EBP + -0x10) = iVar4;
        iVar2 = iVar4;
        break;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 0xa0;
    } while (iVar4 < 6);
    if ((*(int *)(unaff_EBP + -0x14) == 0) && (-1 < iVar2)) {
      FUN_004b50bc();
      FUN_004b876a();
      uStack_24 = 0x5685ba;
      _memset((void *)(*(int *)(extraout_ECX + 0x168) + *(int *)(unaff_EBP + -0x10) * 0x10),0,0x10);
      if ((*(char **)(extraout_ECX + 0x1b4) != (char *)0x0) &&
         ((**(char **)(extraout_ECX + 0x1b4) != '\0' && (iVar2 = FUN_008858f0(), iVar2 == 0)))) {
        FUN_00414f29();
      }
      if (DAT_0097941c == 0) {
        iVar2 = FUN_004029b9();
        *(int *)(unaff_EBP + 8) = iVar2;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        if (iVar2 != 0) {
          FUN_00570070();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      }
      FUN_005719cc();
      FUN_005719f2();
      if (DAT_00978368 != 0) {
        *(undefined4 *)(DAT_00978368 + 0x2080) = 1;
      }
      iVar2 = FUN_004029b9();
      *(int *)(unaff_EBP + 8) = iVar2;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      if (iVar2 != 0) {
        FUN_0056d411();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00564909();
      goto LAB_005686b2;
    }
  }
  FUN_0057a546();
  if (DAT_00978364 != 0) {
    FUN_00817f6e();
  }
LAB_005686b2:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


