/* ptr_0088797f - 0x0088797f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_0088797f(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_009807a0 == 0) {
    PTR_DAT_00973740 = *(undefined **)PTR_PTR_00973770;
    PTR_DAT_00973744 = *(undefined **)(PTR_PTR_00973770 + 4);
    PTR_DAT_00973748 = *(undefined **)(PTR_PTR_00973770 + 8);
    PTR_PTR_00973770 = (undefined *)&PTR_DAT_00973740;
    FUN_00887ba3(DAT_009808dc);
    FUN_0087aa78(DAT_009808dc);
    DAT_009808dc = (undefined4 *)0x0;
    return 0;
  }
  puVar1 = (undefined4 *)FUN_0087fc96(1,0x30);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = FUN_00887a4a(puVar1);
    if (iVar2 == 0) {
      *puVar1 = *(undefined4 *)PTR_PTR_00973770;
      puVar1[1] = *(undefined4 *)(PTR_PTR_00973770 + 4);
      puVar1[2] = *(undefined4 *)(PTR_PTR_00973770 + 8);
      PTR_PTR_00973770 = (undefined *)puVar1;
      FUN_00887ba3(DAT_009808dc);
      FUN_0087aa78(DAT_009808dc);
      DAT_009808dc = puVar1;
      return 0;
    }
    FUN_00887ba3(puVar1);
    FUN_0087aa78(puVar1);
  }
  return 1;
}


