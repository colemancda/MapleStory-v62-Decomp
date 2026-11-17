/* FUN_006f2797 - 0x006f2797 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006f2797(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  char *pcVar3;
  
  FUN_00879bb8();
  FUN_006ef725(unaff_EBP + 0x14,*(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14))
  ;
  pcVar3 = *(char **)(unaff_EBP + 0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
    FUN_0074d6fb();
  }
  else {
    iVar1 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x30))(pcVar3);
    iVar1 = iVar1 + 0x14 + *(int *)(unaff_EBP + 0xc);
    iVar2 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x2c))(iVar1);
    FUN_0074d755(iVar2 + 0x14 + *(int *)(unaff_EBP + 8),iVar1,pcVar3);
    *(undefined4 *)(extraout_ECX + 0xb00) = 8000;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


