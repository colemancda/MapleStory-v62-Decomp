/* FUN_00674439 - 0x00674439 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00674439(int param_1,LPCSTR param_2)

{
  int iVar1;
  CHAR local_408 [1024];
  undefined1 local_8 [4];
  
  iVar1 = wvsprintfA(local_408,param_2,&stack0x0000000c);
  (*DAT_0097b454)(*(undefined4 *)(param_1 + 0x114),local_408,iVar1,local_8,0);
  return iVar1;
}


