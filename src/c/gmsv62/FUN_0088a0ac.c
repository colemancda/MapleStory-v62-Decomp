/* FUN_0088a0ac - 0x0088a0ac in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Removing unreachable block (ram,0x0088a386) */
/* WARNING: Removing unreachable block (ram,0x0088a38f) */
/* WARNING: Removing unreachable block (ram,0x0088a424) */
/* WARNING: Removing unreachable block (ram,0x0088a50c) */
/* WARNING: Removing unreachable block (ram,0x0088a433) */
/* WARNING: Removing unreachable block (ram,0x0088a450) */
/* WARNING: Removing unreachable block (ram,0x0088a43b) */
/* WARNING: Removing unreachable block (ram,0x0088a441) */
/* WARNING: Removing unreachable block (ram,0x0088a444) */
/* WARNING: Removing unreachable block (ram,0x0088a453) */
/* WARNING: Removing unreachable block (ram,0x0088a502) */
/* WARNING: Removing unreachable block (ram,0x0088a45d) */
/* WARNING: Removing unreachable block (ram,0x0088a463) */
/* WARNING: Removing unreachable block (ram,0x0088a46b) */
/* WARNING: Removing unreachable block (ram,0x0088a488) */
/* WARNING: Removing unreachable block (ram,0x0088a48a) */
/* WARNING: Removing unreachable block (ram,0x0088a492) */
/* WARNING: Removing unreachable block (ram,0x0088a495) */
/* WARNING: Removing unreachable block (ram,0x0088a49a) */
/* WARNING: Removing unreachable block (ram,0x0088a49d) */
/* WARNING: Removing unreachable block (ram,0x0088a4d4) */
/* WARNING: Removing unreachable block (ram,0x0088a4e4) */
/* WARNING: Removing unreachable block (ram,0x0088a4db) */
/* WARNING: Removing unreachable block (ram,0x0088a4a4) */
/* WARNING: Removing unreachable block (ram,0x0088a4ab) */
/* WARNING: Removing unreachable block (ram,0x0088a4b7) */
/* WARNING: Removing unreachable block (ram,0x0088a51d) */
/* WARNING: Removing unreachable block (ram,0x0088a523) */
/* WARNING: Removing unreachable block (ram,0x0088a4bd) */
/* WARNING: Removing unreachable block (ram,0x0088a532) */

undefined4 FUN_0088a0ac(undefined4 param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_60 [44];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = local_60;
  local_2c = 0;
  local_1c = 1;
  local_8 = 0;
  local_14 = 0;
  local_28 = 0;
  local_24 = 0;
  local_30 = 0;
  local_34 = 0;
  local_20 = 0;
  local_c = 0;
  local_18 = 0;
  for (; (((cVar1 = *param_3, cVar1 == ' ' || (cVar1 == '\t')) || (cVar1 == '\n')) ||
         (cVar1 == '\r')); param_3 = param_3 + 1) {
  }
                    /* WARNING: Could not recover jumptable at 0x0088a10f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)PTR_LAB_0088a54d)();
  return uVar2;
}


