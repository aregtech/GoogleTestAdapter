﻿using System.IO;

namespace GoogleTestAdapter.Helpers
{
    public static class Utils
    {

        public static string GetTempDirectory()
        {
            string tempDirectory = Path.Combine(Path.GetTempPath(), Path.GetRandomFileName());
            Directory.CreateDirectory(tempDirectory);
            return tempDirectory;
        }

    }

}