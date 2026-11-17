/* FUN_004cd1dd - 0x004cd1dd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004cd1dd(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_00978358;
  iVar2 = *(int *)(*(int *)(DAT_00978358 + 0x1744) + 4);
  if ((iVar2 != 0) &&
     (iVar2 = FUN_004cd670(iVar2 + 0x16c,*(undefined4 *)(iVar2 + 0x174)), iVar2 != 0)) {
    iVar2 = 0;
    do {
      iVar3 = *(int *)(iVar2 + 4 + *(int *)(iVar1 + 0x1744));
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = FUN_004cd670(iVar3 + 0x16c,*(undefined4 *)(iVar3 + 0x174));
      if ((iVar3 != 0) && (iVar3 = FUN_00616974(param_1), iVar3 != 0)) {
        return 1;
      }
      iVar2 = iVar2 + 8;
    } while (iVar2 < 0x18);
  }
  return 0;
}


