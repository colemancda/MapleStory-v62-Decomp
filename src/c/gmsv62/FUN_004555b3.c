/* FUN_004555b3 - 0x004555b3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004555b3(int param_1,uint param_2)

{
  int iVar1;
  
  if (((param_2 & 0x80000000) == 0) && (param_1 == 0x14)) {
    iVar1 = FUN_0045dc32();
    FUN_0045dc39(iVar1 == 0);
  }
  iVar1 = FUN_0045dc32();
  if ((iVar1 != 0) && (iVar1 = FUN_004868df(param_1,param_2), iVar1 != 0)) {
    return;
  }
  iVar1 = FUN_0048f7ae(param_1,param_2);
  if ((iVar1 == 0) && (iVar1 = FUN_0049052d(param_1,param_2), iVar1 == 0)) {
    FUN_00495aaa(param_1,param_2);
  }
  return;
}


