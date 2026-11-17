/* FUN_005aa403 - 0x005aa403 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_005aa403(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int extraout_ECX;
  char *pcVar7;
  char *_Str1;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar6 = *(int *)(extraout_ECX + 4);
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar6 == 0) {
    iVar6 = *(int *)(extraout_ECX + 8);
  }
  else {
    if (*(uint *)(extraout_ECX + 0xc) <= *(uint *)(extraout_ECX + 0x14)) goto LAB_005aa440;
    iVar6 = *(int *)(extraout_ECX + 8) * 2 + 1;
  }
  if (iVar6 != 0) {
    FUN_005ac040(iVar6,0);
  }
LAB_005aa440:
  pcVar7 = (char *)**(undefined4 **)(unaff_EBP + 8);
  uVar4 = 0;
  if (pcVar7 != (char *)0x0) {
    for (; *pcVar7 != '\0'; pcVar7 = pcVar7 + 1) {
      uVar4 = uVar4 * 0x20 + 1 + (int)*pcVar7;
    }
  }
  uVar4 = uVar4 % *(uint *)(extraout_ECX + 8);
  iVar6 = *(int *)(*(int *)(extraout_ECX + 4) + uVar4 * 4);
  piVar1 = (int *)(*(int *)(extraout_ECX + 4) + uVar4 * 4);
  do {
    if (iVar6 == 0) {
      *(int *)(extraout_ECX + 0xc) = *(int *)(extraout_ECX + 0xc) + 1;
      iVar6 = FUN_005ac289();
      *(int *)(unaff_EBP + -0x18) = iVar6;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        uVar3 = **(undefined4 **)(unaff_EBP + 8);
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        FUN_00414edd(uVar3,0xffffffff);
        *(undefined4 *)(unaff_EBP + -0x14) = 1;
        iVar6 = *piVar1;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        iVar6 = FUN_005abc11(unaff_EBP + -0x10,iVar6);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if ((*(byte *)(unaff_EBP + -0x14) & 1) != 0) {
        FUN_00414ebb();
      }
      puVar2 = *(undefined4 **)(unaff_EBP + 0xc);
      if (puVar2 != (undefined4 *)0x0) {
        *(undefined4 *)(iVar6 + 0xc) = *puVar2;
        FUN_005abe41(puVar2 + 1);
      }
      *piVar1 = iVar6;
LAB_005aa532:
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return iVar6;
    }
    pcVar7 = (char *)**(int **)(unaff_EBP + 8);
    if ((char *)**(int **)(unaff_EBP + 8) == (char *)0x0) {
      pcVar7 = DAT_00980dfc;
    }
    _Str1 = *(char **)(iVar6 + 8);
    if (*(char **)(iVar6 + 8) == (char *)0x0) {
      _Str1 = DAT_00980dfc;
    }
    iVar5 = _strcmp(_Str1,pcVar7);
    if (iVar5 == 0) {
      puVar2 = *(undefined4 **)(unaff_EBP + 0xc);
      if (puVar2 != (undefined4 *)0x0) {
        *(undefined4 *)(iVar6 + 0xc) = *puVar2;
        FUN_005abe41(puVar2 + 1);
      }
      goto LAB_005aa532;
    }
    iVar6 = *(int *)(iVar6 + 4);
  } while( true );
}


