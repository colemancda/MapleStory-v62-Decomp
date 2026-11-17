/* FUN_00888504 - 0x00888504 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00888504(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char local_c [8];
  
  if (((param_1 == (char *)0x0) || (*param_1 == '\0')) ||
     (iVar1 = _strcmp(param_1,(char *)&PTR_LAB_008f4c28), iVar1 == 0)) {
    uVar2 = 0x1004;
  }
  else {
    iVar1 = _strcmp(param_1,(char *)&PTR_LAB_008f4c24);
    if (iVar1 != 0) goto LAB_00888560;
    uVar2 = 0xb;
  }
  iVar1 = (*DAT_0098092c)(DAT_00980928,uVar2,local_c,8);
  if (iVar1 == 0) {
    return;
  }
  param_1 = local_c;
LAB_00888560:
  FUN_0087b620(param_1);
  return;
}


