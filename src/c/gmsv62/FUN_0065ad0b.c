/* FUN_0065ad0b - 0x0065ad0b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0065ad0b(undefined4 *param_1)

{
  int *piVar1;
  bool bVar2;
  
  if (DAT_00973a64 == (int *)0x0) {
    FUN_004011ba(0);
  }
  piVar1 = DAT_00973a64;
  bVar2 = DAT_00973a64 != (int *)0x0;
  *param_1 = DAT_00973a64;
  if (bVar2) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return param_1;
}


