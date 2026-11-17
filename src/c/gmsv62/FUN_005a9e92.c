/* FUN_005a9e92 - 0x005a9e92 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


float10 __fastcall FUN_005a9e92(int *param_1)

{
  int iVar1;
  int *local_c;
  int *piStack_8;
  
  local_c = param_1;
  piStack_8 = param_1;
  iVar1 = (**(code **)(*param_1 + 0x78))(param_1,&local_c);
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,param_1,&DAT_00963de8);
  }
  return (float10)(double)CONCAT44(piStack_8,local_c);
}


