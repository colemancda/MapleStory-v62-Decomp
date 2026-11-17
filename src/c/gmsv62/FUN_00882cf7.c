/* FUN_00882cf7 - 0x00882cf7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00882cf7(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_00980780 = 1;
                    /* WARNING: Could not recover jumptable at 0x00882d11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_00980780 = 1;
                    /* WARNING: Could not recover jumptable at 0x00882d26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_009807ac;
  }
  DAT_00980780 = (uint)bVar2;
  return param_1;
}


