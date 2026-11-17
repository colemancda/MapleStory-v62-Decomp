/* FUN_0047581c - 0x0047581c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0047581c(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_0042459a();
  uVar1 = FUN_0042452b();
  if (*(int *)(DAT_00978368 + 0x2050) != 0) {
    if ((DAT_009796d4 != 0) &&
       (iVar3 = (**(code **)(*(int *)(DAT_009796d4 + 4) + 0x48))(&DAT_00978498), iVar3 != 0)) {
      return;
    }
    FUN_0084bb67(uVar2,uVar1);
  }
  return;
}


