/* ptr_00887204 - 0x00887204 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ptr_00887204(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (_DAT_009807a8 == 0) {
    PTR_PTR_00973684 = (undefined *)&PTR_DAT_00973688;
    FUN_008875e3(_DAT_009808cc);
    FUN_0087aa78(_DAT_009808cc);
    _DAT_009808cc = (undefined *)0x0;
    return 0;
  }
  puVar1 = (undefined *)FUN_0087fc96(1,0xac);
  if (puVar1 != (undefined *)0x0) {
    iVar2 = FUN_00887295(puVar1);
    if (iVar2 == 0) {
      PTR_PTR_00973684 = puVar1;
      FUN_008875e3(_DAT_009808cc);
      FUN_0087aa78(_DAT_009808cc);
      _DAT_009808cc = puVar1;
      return 0;
    }
    FUN_008875e3(puVar1);
    FUN_0087aa78(puVar1);
  }
  return 1;
}


