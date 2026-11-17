/* ptr_0077f39b - 0x0077f39b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool ptr_0077f39b(int param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = DAT_0097bef0;
  if (((DAT_0097bef0 == 0) && (iVar1 = DAT_0097befc, DAT_0097befc == 0)) &&
     (iVar1 = DAT_0097bef8, DAT_0097bef8 == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = iVar1 == param_1;
  }
  return bVar2;
}


