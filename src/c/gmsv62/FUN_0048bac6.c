/* FUN_0048bac6 - 0x0048bac6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint FUN_0048bac6(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0048bdd7(0);
  uVar2 = -(uint)(iVar1 != 0) & iVar1 + 8U;
  *(undefined4 *)(uVar2 + 4) = 1;
  return -(uint)(uVar2 != 0) & uVar2 - 8;
}


