/* FUN_007021de - 0x007021de in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_007021de(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  FUN_00789e42(0xe,0,0xffffffff,0xffffffff,1,0,0);
  DAT_0097bdc4 = -(uint)(extraout_ECX + 0x15e != (undefined4 *)0x0) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x15e] = 0;
  extraout_ECX[0x160] = 0;
  extraout_ECX[0x161] = 0;
  extraout_ECX[0x162] = 0;
  extraout_ECX[0x163] = 0;
  extraout_ECX[0x164] = 0;
  extraout_ECX[0x165] = 0;
  extraout_ECX[0x166] = 0;
  extraout_ECX[0x168] = 0;
  extraout_ECX[0x16a] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_0087b2f0(extraout_ECX + 0x16b,8,5,ptr_0045e147,thunk_FUN_00450463);
  extraout_ECX[0x176] = 0;
  extraout_ECX[0x177] = 0;
  extraout_ECX[0x178] = 0;
  extraout_ECX[0x17a] = 0;
  extraout_ECX[0x17b] = 0x1f;
  extraout_ECX[0x17c] = 0;
  extraout_ECX[0x179] = &PTR_FUN_008f0700;
  extraout_ECX[0x17d] = 100;
  extraout_ECX[0x17e] = 0x18;
  extraout_ECX[0x17f] = 0;
  extraout_ECX[0x181] = 0;
  extraout_ECX[0x182] = 0x1f;
  extraout_ECX[0x183] = 0;
  extraout_ECX[0x180] = &PTR_FUN_008f0054;
  extraout_ECX[0x184] = 100;
  extraout_ECX[0x185] = 0x18;
  extraout_ECX[0x186] = 0;
  extraout_ECX[0x187] = 1;
  extraout_ECX[0x188] = 0;
  extraout_ECX[0x189] = 0;
  extraout_ECX[0x18a] = 0;
  *extraout_ECX = &PTR_FUN_008f06c8;
  extraout_ECX[1] = &PTR_FUN_008f067c;
  extraout_ECX[2] = &PTR_FUN_008f0678;
  extraout_ECX[0x18b] = 0;
  extraout_ECX[0x18c] = 0;
  extraout_ECX[0x18d] = 0;
  extraout_ECX[0x18e] = 0;
  extraout_ECX[399] = 0;
  iVar2 = extraout_ECX[0x15c];
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  extraout_ECX[0x15f] = (uint)(iVar2 != 0);
  uVar1 = FUN_0070238a(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_00627ce8(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_00445a30();
  if ((extraout_ECX[0x15e] == 0) || (*(int *)(extraout_ECX[0x15e] + -4) == 0)) {
    iVar2 = FUN_007023ae();
    if (iVar2 == 0) goto LAB_00702374;
  }
  FUN_00705381();
LAB_00702374:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


