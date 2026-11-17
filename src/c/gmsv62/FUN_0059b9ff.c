/* FUN_0059b9ff - 0x0059b9ff in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_0059b9ff(int param_1)

{
  int iVar1;
  
  iVar1 = InternetOpenA(s_MapleTVDownloader_009659c4,0,0,0,0);
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 != 0) {
    iVar1 = InternetConnectA(iVar1,s_patch_mapleglobal_com_009659ac,0x15,0,0,1,0x8000000,0);
    *(int *)(param_1 + 0x10) = iVar1;
    if (iVar1 != 0) {
      return 1;
    }
    GetLastError();
  }
  FUN_0059ba51();
  return 0;
}


