/* FUN_00471582 - 0x00471582 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00471582(char *param_1,undefined4 param_2)

{
  size_t sVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 local_404 [1024];
  
  sVar1 = _strlen(param_1);
  if (sVar1 < 0x3ff) {
    FUN_004714b2(param_1,local_404,PTR_s__________________00964718,param_2);
    for (uVar4 = 0; (DAT_009784f4 != 0 && (uVar4 < *(uint *)(DAT_009784f4 + -4))); uVar4 = uVar4 + 1
        ) {
      iVar2 = FUN_00471450(local_404,*(undefined4 *)(DAT_009784f4 + uVar4 * 4));
      if (iVar2 != 0) goto LAB_004715df;
    }
    uVar3 = 1;
  }
  else {
LAB_004715df:
    uVar3 = 0;
  }
  return uVar3;
}


