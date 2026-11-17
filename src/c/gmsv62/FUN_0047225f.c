/* FUN_0047225f - 0x0047225f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0047225f(void)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar5;
  
  FUN_00879bb8();
  iVar2 = *(int *)(DAT_00978368 + 0x2098);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    pcVar1 = (char *)0x0;
  }
  else {
    pcVar1 = (char *)(iVar2 + 4);
  }
  if (pcVar1 == (char *)0x0) {
    pcVar1 = DAT_00980dfc;
  }
  pcVar3 = DAT_00980dfc;
  if (*(int *)(unaff_EBP + 8) != 0) {
    pcVar3 = *(char **)(unaff_EBP + 8);
  }
  iVar2 = _strcmp(pcVar3,pcVar1);
  if (iVar2 != 0) {
    iVar2 = 0;
    if (*(int *)(extraout_ECX + 8) != 0) {
      iVar2 = *(int *)(*(int *)(extraout_ECX + 8) + -4);
    }
    do {
      iVar2 = iVar2 + -1;
      if (iVar2 < 0) {
        iVar2 = unaff_EBP + 8;
        FUN_004655d4(0xffffffff);
        FUN_00414f8b(iVar2);
        uVar5 = 1;
        goto LAB_00472304;
      }
      pcVar1 = *(char **)(unaff_EBP + 8);
      if (*(char **)(unaff_EBP + 8) == (char *)0x0) {
        pcVar1 = DAT_00980dfc;
      }
      pcVar3 = *(char **)(*(int *)(extraout_ECX + 8) + iVar2 * 4);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = DAT_00980dfc;
      }
      iVar4 = _strcmp(pcVar3,pcVar1);
    } while (iVar4 != 0);
  }
  uVar5 = 0;
LAB_00472304:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


