/* FUN_007467b1 - 0x007467b1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_007467b1(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar1 = param_1;
  param_1 = 0;
  piVar3 = &DAT_0096b64c;
  do {
    local_14 = piVar3[-1];
    local_10 = *piVar3;
    local_c = local_14 + 0x20;
    local_8 = local_10 + 0x20;
    iVar2 = (*DAT_0097b57c)(&local_14,iVar1 + -0x287,param_2 + -0x1ab);
    if (iVar2 != 0) {
      return param_1;
    }
    param_1 = param_1 + 1;
    piVar3 = piVar3 + 2;
  } while ((int)piVar3 < 0x96b68c);
  return -1;
}


