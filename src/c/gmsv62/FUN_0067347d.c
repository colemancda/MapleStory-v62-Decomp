/* FUN_0067347d - 0x0067347d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined1 FUN_0067347d(int param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_2;
  iVar2 = *param_2 + param_1;
  FUN_006734d0((int)&param_1 + 3,iVar2,1);
  FUN_006734d0((int)&param_2 + 3,iVar2 + 1,1);
  FUN_006734d0(param_3,iVar2 + 2,(uint)param_2 >> 0x18);
  *piVar1 = *piVar1 + ((uint)param_2 >> 0x18) + 2;
  return param_1._3_1_;
}


