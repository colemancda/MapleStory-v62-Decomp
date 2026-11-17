/* FUN_00883673 - 0x00883673 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined1 * FUN_00883673(void)

{
  bool bVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  bVar1 = true;
  if (DAT_00972a1c == (undefined1 *)0x0) {
    DAT_00972a1c = _malloc(0x351);
  }
  *DAT_00972a1c = 0;
  FUN_00883847(DAT_00972a1c,3,PTR_s_LC_COLLATE_00972a24,&DAT_008f4288,PTR_DAT_00972a28);
  ppuVar3 = &PTR_DAT_00972a28;
  do {
    FUN_0087b210(DAT_00972a1c,&DAT_008f4280);
    ppuVar4 = ppuVar3 + 3;
    iVar2 = _strcmp(*ppuVar3,ppuVar3[3]);
    if (iVar2 != 0) {
      bVar1 = false;
    }
    FUN_00883847(DAT_00972a1c,3,ppuVar3[2],&DAT_008f4288,*ppuVar4);
    ppuVar3 = ppuVar4;
  } while ((int)ppuVar4 < 0x972a58);
  if (!bVar1) {
    return DAT_00972a1c;
  }
  FUN_0087aa78(DAT_00972a1c);
  DAT_00972a1c = (undefined1 *)0x0;
  return PTR_DAT_00972a34;
}


